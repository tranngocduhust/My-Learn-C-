#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student {
private:
	int age;
	string name;
	string adrees;
	string email;
public:
	student() {
		age = 0;
		name = "";
		adrees = "";
		email = "";
	}
	student(int age, string name, string adress, string email) {
		this->age = age;
		this->name = name;
		this->adrees = adrees;
		this->email = email;
	}
	void showinfo() {
		cout << "\nname:" << name << endl;
		cout << "age:" << age << endl;
		cout << "adress:" << adrees << endl;
		cout << "email:" << email << endl << endl;
	}
};
void showfull(student* arr, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		arr[i].showinfo();
	}
}
int main() {
	size_t i = 0;
	int age;
	string name;
	string adress;
	string email;
	student* Student = new student[10];
	fstream Object;
	Object.open("input3.txt");
	while (!Object.eof()) {
		Object >> age;
		Object.ignore();
		getline(Object, name);
		getline(Object, adress);
		getline(Object, email);
		student tem(age, name, adress, email);
		Student[i] = tem;
		i++;
	}
	showfull(Student, i);
	delete[] Student;
	Object.close();
	return 0;
}