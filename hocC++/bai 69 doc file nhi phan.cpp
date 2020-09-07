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
	void showinfo();
};

int main() {
	Student s;
	ifstream OB("binary.bin", ios::binary);
	if (OB) {
		cout << "Mo file thanh cong" << endl << endl;

		/*while (!OB.eof()) {
			OB.read((char*)&s, sizeof(Student));
			if (OB.good()) {
				s.showinfo();
			}
		}*/
		OB.seekg(1 * sizeof(Student));
		OB.read((char*)&s, sizeof(Student));
		s.showinfo();

	}
	else {
		cout << "fail" << endl;
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
void Student::Writetofile(Student& p, ofstream& OB) {
	OB.write((char*)&p, sizeof(Student));
}
void Student::showinfo() {
	cout << "name:" << name << endl;
	cout << "Age:" << age << endl;
	cout << "Adress:" << adress << endl;
	cout << "Email:" << email << endl << endl;
}