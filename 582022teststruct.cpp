#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct student{
	int id;
	string name;
	string address;
	float gpa;
	void showInfo() {
        cout << left << setw(15) << id << setw(25) << name
            << setw(12) << address << setw(12) << gpa << endl;
        }
};

void fillInfo(student& student){
	cout<<"nhap id: ";
	cin >> student.id;
	cout<< "nhap ten: ";
	getline(cin,student.name);
	cout<<"nhap dia chi: ";
	getline(cin,student.address);
	cout << "nhap GPA: ";
	cin >> student.gpa;
}
int main(){
	student tuan;
	fillInfo(tuan);
	cout << tuan.address;
	return 0;
}
