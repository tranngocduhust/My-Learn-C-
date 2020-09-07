#include<iostream>
using namespace std;
class student {
private:
	char name[50];
	char nameUniversity[100];
	int age;
	float point;
	char classification;
public:
	student();
	student(char* name1, char* nameUi, int& Age);
	student(char* name1, char* nameUi, int& Age, float& Poi, char& cl);
	void showinfo();
	~student();
};

void getinfo(char* name1, char* nameUi, int& Age, float& Poi, char& cl); 

int main() {
	char* name1=new char[50], *nameUi=new char[100];
	int Age;
	float Poi;
	char cl;
	getinfo(name1, nameUi, Age, Poi, cl);
	student s(name1, nameUi,  Age,  Poi, cl);
	s.showinfo();

	return 0;
}
student::student() {
	strcpy_s(name, 45, "Tran ngoc du");
	strcpy_s(nameUniversity, 99, "Ha Noi university of science and technology");
	age = 19;
	point = 3.77;
	classification = 'A';
}
student::student(char* name1, char* nameUi, int& Age) {
	strcpy_s(name, 45, name1);
	strcpy_s(nameUniversity, 99, nameUi);
	age = Age;
	point = 3.77;
	classification = 'A';
}
student::student(char* name1, char* nameUi, int& Age, float& Poi, char& cl) {
	cout << "constructor" << endl;
	strcpy_s(name, 45, name1);
	strcpy_s(nameUniversity, 99, nameUi);
	age = Age;
	point = Poi;
	classification = cl;
}
void student::showinfo() {
	cout << "\n===================Show information of student====================" << endl;
	cout << "Name            : " << name << endl;
	cout << "Age             : " << age << endl;
	cout << "Name University : " << nameUniversity << endl;
	cout << "Point           : " << point << endl;
	cout << "Classification  : " << classification << endl;
	cout << "==============================The end============================" << endl;
}
student::~student() {
	cout << "deconstructor" << endl;
}
void getinfo(char* name1, char* nameUi, int& Age, float& Poi, char& cl) {
	cout << "====================Get information of student====================" << endl;
	cout << "Name            : ";
	cin.getline(name1, 45);
	cout << "Age             : ";
	cin >> Age;
	cin.ignore();
	cout << "Name University : ";
	cin.getline(nameUi, 99);
	cout << "Point           : ";
	cin >> Poi;
	cout << "Classification  : ";
	cin >> cl;
	cout << "==============================The end============================" << endl;
}