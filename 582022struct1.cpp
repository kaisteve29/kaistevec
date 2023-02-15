/*
#include<iostream>
#include<string>
using namespace std;

struct student{
	string name;
	int age;
	int GPA;
	char type;
};

void addInfo(student Tuan){
	cout<<"nhap ten: ";
	cin>> Tuan.name;
	cout<<"nhap tuoi: ";
	cin>>Tuan.age;
	cout <<"nhap GPA: ";
	cin >>Tuan.GPA;
}
int main()
{
    student Tuan;
    addInfo(Tuan);
    cout << left << setw(25) << "Full name"
        << setw(12) << "Age" << setw(12) << "GPA" << endl;
    Student* studentPtr = &minh;
    showInfo(studentPtr);
    return 0;
}
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Student {
    string id;
    string fullName;
    int age;
    float gpa;
    void showInfo() {
        cout << left << setw(15) << id << setw(25) << fullName
            << setw(12) << age << setw(12) << gpa << endl;
    }
};


void fillInfo(Student& student) {
    cout << "Id: ";
    getline(cin, student.id); 
    cout << "Full name: ";
    getline(cin, student.fullName);
    cout << "age: ";
    cin >> student.age;
    cout << "Gpa: ";
    cin >> student.gpa;
}




int main()
{
    Student tuan;
    fillInfo(tuan);
    cout << left << setw(15) << "ID" << setw(25) << "Full name"
        << setw(12) << "Age" << setw(12) << "GPA" << endl;
    tuan.showInfo();
    return 0;
}
