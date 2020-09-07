#include<iostream>
#include<string>
using namespace std;
class Employee {
private:
	static int id;
	char firstName[50];
	char LastName[50];
	char adress[50];
	char position[50];
	char PhoneNumber[50];
	float salary;
public:
	Employee();
	Employee(char* firstName, char* LastName, char* adress, char* position, char* PhoneNumber, float salary);
	void setFirstName(char* firstName);
	void setLastName(char* LastName);
	void setadress(char* adress);
	void setposition(char* position);
	void setphoneNumber(char* PhoneNumber);
	void setsalary(float salary);
	char* getFirstName();
	char* getLastName();
	char* getadress();
	char* getposition();
	char* getphoneNumber();
	float getsalary();
	void raisesalary(char* pos);
	void showInfo();
	void getfull();
};
int Employee::id = 100;

void sx(Employee *s,int n) {
	Employee gan;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i; j < n; j++)
		{
			if (s[i].getsalary() < s[j].getsalary()) {
				gan = s[j];
				s[j] = s[i];
				s[i] = gan;
			}
		}
	}
}

int main() {
	char firstName[50], LastName[50], adress[50], position[50], PhoneNumber[50];
	float salary;
	int n;
	cout << "Employee Number:";
	cin >> n;
	cin.ignore();


	Employee*s = new Employee[n];
	for (size_t i = 0; i < n; i++)
	{
		s[i].getfull();
	}
	sx(s, n);
	for (size_t i = 0; i < n; i++)
	{
		s[i].showInfo();
	}
	delete[]s;
	//

}

void Employee::setFirstName(char* firstName) {
	strcpy_s(this->firstName, 49, firstName);
}
void Employee::setLastName(char* LastName) {
	strcpy_s(this->LastName, 49, LastName);
}
void Employee::setadress(char* adress) {
	strcpy_s(this->adress, 49, adress);
}
void Employee::setposition(char* position) {
	strcpy_s(this->position, 49, position);
}
void Employee::setphoneNumber(char* PhoneNumber) {
	strcpy_s(this->PhoneNumber, 49, PhoneNumber);
}
void Employee::setsalary(float salary) {
	this->salary = salary;
}
char* Employee:: getFirstName() {
	return firstName;
}
char* Employee::getLastName() {
	return LastName;
}
char* Employee::getadress() {
	return adress;
}
char* Employee::getposition() {
	return position;
}
char* Employee::getphoneNumber() {
	return PhoneNumber;
}
float Employee::getsalary() {
	return salary;
}
Employee::Employee() {

	strcpy_s(firstName, 49, "Tran");
	strcpy_s(LastName, 49, "Du");
	strcpy_s(adress, 49, "Xom Trong Ngoai");
	strcpy_s(position, 49, "President");
	strcpy_s(PhoneNumber, 49, "0386081262");
	salary = 9.5;
}
Employee::Employee(char* firstName, char* LastName, char* adress, char* position, char* PhoneNumber, float salary) {
	setFirstName(firstName);
	setLastName(LastName);
	setadress(adress);
	setposition(position);
	setphoneNumber(PhoneNumber);
	setsalary(salary);
}
void Employee:: raisesalary(char* pos) {
	if (strcmp(pos, "president") == 0) {
		salary = 20;
	}
	else if (strcmp(pos, "leader") == 0) {
		salary = 15;
	}
	else {
		salary = 10;
	}
}
void Employee:: showInfo() {
	cout << "====================ShowInfo=====================" << endl;
	cout << "FirstName   : " << firstName << endl;
	cout << "LastName    : " << LastName << endl;
	cout << "Adress      : " << adress << endl;
	cout << "Position    : " << position << endl;
	cout << "PhoneNumber : " << PhoneNumber << endl;
	cout << "Salary      : " << salary << endl;
	cout << "====================The End======================" << endl;
}
void Employee:: getfull() {
	cout << "=================Get Employee=============" << endl;
	cout << "FirstName   : ";
	cin.getline(firstName, 49);
	cout << "LastName    : ";
	cin.getline(LastName, 49);
	cout << "Adress      : ";
	cin.getline(adress, 49);
	cout << "Position    : ";
	cin.getline(position, 49);
	cout << "PhoneNumber : ";
	cin.getline(PhoneNumber, 49);
	cout << "Salary      : ";
	cin >> salary;
	cin.ignore();
	cout << "==================The End=================" << endl << endl;
}