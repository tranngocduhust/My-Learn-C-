#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student {
private:
	int age;
	char name[100];
	char adress[100];
	char email[100];
public:
	Student() {
		age = 0;
		name[0] = '\0';
		adress[0] = '\0';
		email[0] = '\0';
	}
	Student(int age, string name, string adress, string email);
	void setage(int age);
	void setname(string name);
	void setadress(string adress);
	void setemail(string email);
	void Writetofile(Student& p, ofstream& OB);
};

int main() {

	Student s1(19, "Tran Ngoc Du", "Trong Ngoai", "phap27042001@gmail.com");
	Student s2(19, "Nguyen Thi Kim Anh", "Tam Hop", "kimanhcici@gmail.com");
	Student s3(19, "Nguyen Hoang Anh", "Lo Ngoi", "anhtho222@gmail.com");
	Student s4(19, "Tran Ngoc", "Tan Phong", "ngocbeo999@gmail.com");
	ofstream OB("binary.bin", ios::binary);
	if (OB.good()) {
		cout << "OK";
		s1.Writetofile(s1, OB);
		s2.Writetofile(s2, OB);
		s3.Writetofile(s3, OB);
		s4.Writetofile(s4, OB);
		
	}
	OB.close();
	return 0;
}

Student::Student(int age, string name, string adress, string email) {
	setage(age);
	setname(name);
	setadress(adress);
	setemail(email);
}
void Student::setage(int age) {
	this->age = age;
}
void Student::setname(string name) {
	size_t a = name.length();
	name.copy(this->name, a);
	this->name[a] = '\0';
}
void Student::setadress(string adress) {
	size_t a = adress.length();
	adress.copy(this->adress, a);
	this->adress[a] = '\0';
}
void Student::setemail(string email) {
	size_t a = email.length();
	email.copy(this->email, a);
	this->email[a] = '\0';
}
void Student:: Writetofile(Student &p, ofstream& OB) {
	OB.write((char*)&p, sizeof(Student));
}