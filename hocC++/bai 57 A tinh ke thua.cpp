#include<iostream>
#include<string>
using namespace std;
// Tao lop cha
class person {
private:
	string name;
	string Adress;
	int age;
public:
	person();
	person(string name, string Adress, int age);
	string getname();
	string getAdress();
	int getage();
	void showinfo();
};
//tao lop con
class student :public person {
private:
	string nameClass;
	string nameUniversity;
	float point;
	string MSSV;
public:
	student(string name, string Adress, int age,
		string nameClass, string nameUniversity, float point, string MSSV);
	void showfull();
};
int main() {

	student s("Tran Ngoc Du", "Trong Ngoai", 19, "TDH 06", "Hanoi University of sciencent and technology", 10, "20191752");
	s.showinfo();
	return 0;
}
person::person() {
	name = "Vu Thuy Linh";
	Adress = "Tam Hop";
	age = 19;
}
person::person(string name, string Adress, int age) {
	this->name = name;
	this->Adress = Adress;
	this->age = age;
}
string person::getname() {
	return name;
}
string person::getAdress() {
	return Adress;
}
int person::getage() {
	return age;
}
void person::showinfo() {
	cout << "Name :" << name << endl;
	cout << "Adress:" << Adress << endl;
	cout << "Age:" << age << endl;
}
student::student(string name, string Adress, int age,
	string nameClass, string nameUniversity, float point, string MSSV) :person(name, Adress, age) {
	this->nameUniversity = nameUniversity;
	this->nameClass = nameClass;
	this->point = point;
	this->MSSV = MSSV;

}
void student:: showfull() {
	cout << "Name :" << getname() << endl;
	cout << "Adress:" << getAdress() << endl;
	cout << "Age:" << getage() << endl;
	cout << "Name Class:" << nameClass << endl;
	cout << "Name University:" << nameUniversity << endl;
	cout << "Point:" << point << endl;
	cout << "MSSV:" << MSSV << endl;
}
