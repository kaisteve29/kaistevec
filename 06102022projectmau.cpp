#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
	string id;		// mã sinh viên
	string firstName;// tên
	string lastName;// h?
	string midName; // d?m
	string address;	// d?a ch?
	int age;		// tu?i
	float gpa;		// di?m TB
};


struct Node {
	Student data;
	Node* next;
};

typedef struct Node* LinkedList;

// khoi tao
void init(LinkedList& head) {
	head = NULL;
}

// tao node tu data cho truoc
Node* createNode(Student data) {
	Node* p = new Node();
	if (p == NULL) {
		return NULL;
	}
	p->data = data;
	p->next = NULL;
	return p;
}

// chen vao dau danh sach
bool insertFirst(LinkedList& head, Student data) {
	Node* p = createNode(data);
	if (p != NULL) {
		if (head == NULL) {
			head = p;
		}
		else {
			p->next = head;
			head = p;
		}
		return true;
	}
	else {
		cout << "Cannot create new node." << endl;
		return false;
	}
}
// chen vao cuoi danh sach
bool insertLast(LinkedList& head, Student data) {
	Node* p = createNode(data);
	if (p != NULL) {
		if (head == NULL) {
			head = p;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = p;
		}
		return true;
	}
	else {
		cout << "Cannot create new node\n";
		return false;
	}
}
// chen vao sau node dau tien co gia tri x
bool insertAfterX(LinkedList& head, Student data, string id) {
	if (head == NULL) {
		return false;
	}
	else {
		Node* newNode = createNode(data);
		Node* p = head;
		while (p != NULL) {
			if (p->data.id.compare(id) == 0) {
				newNode->next = p->next;
				p->next = newNode;
				return true;
			}
			p = p->next;
		}
	}
	return false;
}
// hàm hi?n th? thông tin sinh viên
void display(Student s) {
	cout << left << setw(10) << s.id << setw(10) << s.lastName
		<< setw(10) << s.midName << setw(10) << s.firstName
		<< setw(15) << s.address << setw(10) << s.age 
		<< setw(10) << setprecision(2) << fixed << s.gpa << endl;
}
// hien thi cac node co trong danh sach lien ket
void displayNodes(LinkedList head) {
	if (head == NULL) {
		cout << "Danh sach rong\n";
	}
	else {
		Node* p = head;
		while (p != NULL) {
			display(p->data);
			p = p->next;
		}
	}
}
// li?t kê các sinh viên cùng d?a ch?, gi? s? cùng t?nh/t.ph?
void displayByAddress(LinkedList head, string address) {
	if (head == NULL) {
		cout << "Danh sach rong\n";
	}
	else {
		cout << "Danh sach cac sinh vien cung dia chi:\n";
		Node* p = head;
		while (p != NULL) {
			if (p->data.address.compare(address) == 0) {
				display(p->data);
			}
			p = p->next;
		}
	}
}
// li?t kê các sinh viên có di?m TB >= x
void displayByGPA(LinkedList head, float gpa) {
	if (head == NULL) {
		cout << "Danh sach rong\n";
	}
	else {
		cout << "Danh sach cac sinh vien co diem TB >= " << gpa << ":\n";
		Node* p = head;
		while (p != NULL) {
			if (p->data.gpa >= gpa) {
				display(p->data);
			}
			p = p->next;
		}
	}
}
// Xóa node ? d?u danh sách
bool removeFirst(LinkedList& head) {
	if (head != NULL) {
		Node* p = head;
		head = head->next;
		delete p;
		return true;
	}
	return false;
}
// Xóa node ? cu?i danh sách
bool removeLast(LinkedList& head) {
	if (head != NULL) {
		Node* p = head;
		Node* prevP = p;
		while (p->next != NULL) {
			prevP = p;
			p = p->next;
		}
		if (p == head) {
			return removeFirst(head);
		}
		Node* r = p;
		prevP->next = NULL;
		delete r;
		return true;
	}
	return false;
}
// Xóa sinh viên có id cho tru?c kh?i danh sách
bool removeFirstX(LinkedList& head, string id) {
	if (head != NULL) {
		if (head->data.id.compare(id) == 0) {
			return removeFirst(head);
		}
		else {
			Node* p = head;
			Node* prevP = p;
			while (p->next != NULL) {
				if (p->data.id.compare(id) == 0) {
					break;
				}
				prevP = p;
				p = p->next;
			}
			Node* r = p;
			prevP->next = p->next;
			delete r;
			return true;
		}
	}
	else {
		return false;
	}
}
// Xóa t?t c? các sinh viên có di?m gpa cho tru?c kh?i danh sách
bool removeAllWithGPA(LinkedList& head, float gpa) {
	if (head != NULL) {
		if (head->data.gpa == gpa) {
			while (head != NULL && head->data.gpa == gpa) {
				removeFirst(head);
			}
			return true;
		}
		else {
			Node* p = head;
			Node* prevP = p;
			while (p != NULL) {
				if (p->data.gpa == gpa) {
					Node* r = p;
					prevP->next = p->next;
					delete r;
				}
				prevP = p;
				p = p->next;
			}
			return true;
		}
	}
	return false;
}
// S?p x?p các ph?n t? trong danh sách
void sort(LinkedList& head) {
	for (Node* p = head; p != NULL; p = p->next) {
		for (Node* q = p->next; q != NULL; q = q->next) {
			if (p->data.gpa < q->data.gpa) { // di?m gi?m d?n
				swap(p->data, q->data);
			}
			else if (p->data.gpa == q->data.gpa) {
				if (p->data.firstName.compare(q->data.firstName) > 0) { // tên tang d?n
					swap(p->data, q->data);
				}
				else if (p->data.firstName.compare(q->data.firstName) == 0) {
					if (p->data.lastName.compare(q->data.lastName) > 0) { // h? tang d?n
						swap(p->data, q->data);
					}
				}
			}
		}
	}
}
// Tìm ki?m các ph?n t? trong danh sách
Student* findX(LinkedList head, string id) {
	if (head == NULL) {
		return NULL;
	}
	else {
		Node* current = head;
		while (current != NULL) {
			if (current->data.id.compare(id) == 0) {
				return &(current->data);
			}
			current = current->next;
		}
		return NULL;
	}
}

// Tìm ki?m các ph?n t? trong danh sách
void updateGPA(LinkedList& head, string id, float gpa) {
	if (head == NULL) {
		return;
	}
	else {
		Node* current = head;
		while (current != NULL) {
			if (current->data.id.compare(id) == 0) {
				current->data.gpa = gpa;
			}
			current = current->next;
		}
	}
}

Student createStudent() {
	Student s;
	cout << "Ma sinh vien: ";
	getline(cin, s.id);
	cout << "Ho: ";
	getline(cin, s.lastName);
	cout << "Dem: ";
	getline(cin, s.midName);
	cout << "Ten: ";
	getline(cin, s.firstName);
	cout << "Dia chi: ";
	getline(cin, s.address);
	cout << "Tuoi: ";
	cin >> s.age;
	cout << "Diem TB: ";
	cin >> s.gpa;
	return s;
}

int main() {
	LinkedList list;
	init(list);
	int choice;
	do
	{
		cout << "=================== TUY CHON ===================\n";
		cout << "01. Them moi sinh vien vao dau danh sach.\n";
		cout << "02. Them moi sinh vien vao cuoi danh sach.\n";
		cout << "03. Them moi sinh vien vao sau SV co ma X.\n";
		cout << "04. Cap nhat diem cho sinh vien co ma X.\n";
		cout << "05. Tim sinh vien co ma X.\n";
		cout << "06. Xoa sinh vien dau tien khoi danh sach.\n";
		cout << "07. Xoa sinh vien cuoi cung danh sach.\n";
		cout << "08. Xoa sinh vien co ma X khoi danh sach.\n";
		cout << "09. Xoa tat ca sinh vien co diem TB >= x.\n";
		cout << "10. Liet ke cac sinh vien co dia chi x.\n";
		cout << "11. Sap xep danh sach sinh vien.\n";
		cout << "12. Liet ke cac sinh vien co diem >= x.\n";
		cout << "13. Hien thi danh sach sinh vien.\n";
		cout << "0. Thoat chuong trinh.\n";
		cout << "Xin moi chon: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			cout << "==> Chuong trinh ket thuc <==\n";
			break;
		case 1:
		{
			Student s = createStudent();
			insertFirst(list, s);
			break;
		}
		case 2:
		{
			Student s = createStudent();
			insertLast(list, s);
			break;
		}
		case 3:
		{
			Student s = createStudent();
			string id;
			cout << "Nhap ma sinh vien: ";
			cin >> id;
			insertAfterX(list, s, id);
			break;
		}
		case 4:
		{
			if (list != NULL) {
				string id;
				float gpa;
				cout << "Nhap ma sinh vien can cap nhat diem: ";
				cin >> id;
				cout << "Nhap diem: ";
				cin >> gpa;
				updateGPA(list, id, gpa);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 5:
		{
			if (list != NULL) {
				string id;
				cout << "Nhap ma sinh vien: ";
				cin >> id;
				Student* result = findX(list, id);
				if (result == NULL) {
					cout << "Khong ton tai sinh vien can tim.\n";
				}
				else {
					cout << "Thong tin sinh vien can tim:\n";
					display(*result);
				}
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 6:
			if (list != NULL) {
				removeFirst(list);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		case 7:
			if (list != NULL) {
				removeLast(list);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		case 8:
		{
			if (list != NULL) {
				string id;
				cout << "Nhap ma sinh vien can xoa: ";
				cin >> id;
				removeFirstX(list, id);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 9:
		{
			if (list != NULL) {
				float gpa;
				cout << "Nhap diem TB can xoa: ";
				cin >> gpa;
				removeAllWithGPA(list, gpa);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 10:
		{
			if (list != NULL) {
				string address;
				cout << "Nhap dia chi: ";
				getline(cin, address);
				displayByAddress(list, address);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 11:
			if (list != NULL) {
				sort(list);
				cout << "Danh sach sinh vien sau khi sap xep:\n";
				displayNodes(list);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		case 12:
		{
			if (list != NULL) {
				float gpa;
				cout << "Nhap diem TB: ";
				cin >> gpa;
				displayByGPA(list, gpa);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		}
		case 13:
			if (list != NULL) {
				cout << "Danh sach sinh vien:\n";
				displayNodes(list);
			}
			else {
				cout << "Danh sach rong.\n";
			}
			break;
		default:
			cout << "Sai chuc nang. Vui long chon chuc nang tu 1-13.\n";
			break;
		}
	} while (choice != 0);
}
