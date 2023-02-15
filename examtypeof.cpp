#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int MAX = 100;

typedef struct {
    string id;
    string fullName;
    string address;
    int age;
    float gpa;
} Student;

void fillInfo(Student& s) {
    cout << "Ma sinh vien: ";
    getline(cin, s.id);
    cout << "Ho va ten: ";
    getline(cin, s.fullName);
    cout << "Dia chi: ";
    getline(cin, s.address);
    cout << "Tuoi: ";
    cin >> s.age;
    cout << "Diem TB: ";
    cin >> s.gpa;
}

void showInfo(const Student s) {
    cout << left << setw(15) << s.id << setw(25) << s.fullName
        << setw(25) << s.address << setw(12) << s.age << setw(12) << s.gpa << endl;
}

float findMaxGpa(Student* students, const int n) {
    float max = students[0].gpa;
    for (int i = 1; i < n; i++)
    {
        if (students[i].gpa > max) {
            max = students[i].gpa;
        }
    }
    return max;
}

void showHeader() {
    cout << left << setw(15) << "Ma SV" << setw(25) << "Ho va ten"
        << setw(25) << "Dia chi" << setw(12) << "Tuoi"
        << setw(12) << "Diem TB" << endl;
}

int main()
{
    typedef int newInt;
    newInt choice;
    newInt n = 0;
    Student* students = new Student[MAX];
    do
    {
        cout << "================= MENU =================\n";
        cout << "1. Them moi sinh vien vao danh sach\n";
        cout << "2. Hien thi danh sach sinh vien hien co\n";
        cout << "3. Tim sinh vien co gpa cao nhat\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Xin moi chon: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Xin chao va hen gap lai!\n";
            break;
        case 1: {
            Student s;
            fillInfo(s);
            students[n++] = s;
            break;
        }
        case 2: {
            if (n > 0) {
                cout << "================ DANH SACH SINH VIEN ================\n";
                showHeader();
                for (int i = 0; i < n; i++)
                {
                    showInfo(students[i]);
                }
            }
            else {
                cout << "<== Danh sach sinh vien rong ==>\n";
            }
            break;
        }
        case 3: {
            if (n > 0) {
                float maxGpa = findMaxGpa(students, n);
                cout << "================ CAC SINH VIEN CO GPA CAO NHAT ================\n";
                showHeader();
                for (Student* sPtr = students; sPtr <= &students[n - 1]; sPtr++)
                {
                    if (sPtr->gpa == maxGpa) {
                        showInfo(*sPtr);
                    }
                }
            }
            else {
                cout << "<== Danh sach sinh vien rong ==>\n";
            }
            break;
        }
        default:
            cout << "Sai chuc nang. Vui long kiem tra lai!\n";
            break;
        }
    } while (choice != 0);
    delete[] students;

    return 0;
}
