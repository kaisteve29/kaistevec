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


void fillInfo(Student& a) {
    cout << "Id: ";
    getline(cin, a.id); 
    cout << "Full name: ";
    getline(cin, a.fullName);
    cout << "age: ";
    cin >> a.age;
    cout << "Gpa: ";
    cin >> a.gpa;
}

void showInfo(Student* ptr) {
    cout << left << setw(15) << ptr->id << setw(25) << ptr->fullName
        << setw(12) << ptr->age << setw(12) << ptr->gpa << endl;
}

int main()
{
    Student minh;
    fillInfo(minh);
    cout << left << setw(15) << "ID" << setw(25) << "Full name"
        << setw(12) << "Age" << setw(12) << "GPA" << endl;
    minh.showInfo();
    return 0;
}
