#include<iostream>
using namespace std;
struct car {
	char carname[100];
	char brand[100];
	int cost;
};
struct crush {
	char girlname[100];
	char university[100];
	int hight;
	int wight;
};
struct subject {
	char subjectname[100];
	float diem;
	char classification[10];
};
struct studen {
	char hisname[100];
	int age;
	car ca;
	crush cr;
	subject sb;
};
void getinfo(studen &info) {
	cout << "=============get information studen====================" << endl;
	cout << "his name : ";
	cin.getline(info.hisname, 99);
	cout << "his age : ";
	cin >> info.age;
	cin.ignore();
	cout << "His girl frend name : ";
	cin.getline(info.cr.girlname, 99);
	cout << "Her university name : ";
	cin.getline(info.cr.university, 99);
	cout << "His car name : ";
	cin.getline(info.ca.carname, 99);
	cout << "His car brand : ";
	cin.getline(info.ca.brand, 99);
	cout << "It's cost : ";
	cin >> info.ca.cost;
	cout << "======================the end=========================" << endl;
}
void showinfo(studen& info) {
	cout << endl;
	cout << "===============show information student===============" << endl;
	cout << "his name : "<<info.hisname<<endl;
	cout << "his age : " << info.age << endl;
	cout << "His girl frend name : "<<info.cr.girlname<<endl;
	cout << "Her university name : "<<info.cr.university<<endl;
	cout << "His car name : "<<info.ca.carname<<endl;
	cout << "His car brand : "<<info.ca.brand<<endl;
	cout << "It's cost : "<<info.ca.cost<<endl;
	cout << "========================The end=======================" << endl;
}
int main() {

	studen info;
	getinfo(info);
	showinfo(info);
	return 0;

}