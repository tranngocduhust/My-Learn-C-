#include<iostream>
#include<cstring>
using namespace std;
class crush {
public:
	int age;
	char name[100];
	char nameUniversity[100];
	int hieght;
	int wieght;
	char carName[100];
	crush() {
		cout << "call constructor function non value" << endl;
		age = 0;
		name[0] = '\0';
		nameUniversity[0] = '\0';
		hieght = 0;
		wieght = 0;
		carName[0] = '\0';
	}
	crush(int Age,char *Name,char *namecar) {
		cout << "call constructor function 1 value" << endl;
		age = Age;
		strcpy_s(nameUniversity, 99,"HUST");
		strcpy_s(name,99, Name);
		hieght = 150;
		wieght = 49;
		strcpy_s(carName,99, namecar);
	}
	crush(int Age, char* Name, char* namecar,char*nameuni, int Hieght) {
		cout << "call constructor function 1 value" << endl;
		age = Age;
		strcpy_s(nameUniversity, 99, nameuni);
		strcpy_s(name, 99, Name);
		hieght = Hieght;
		strcpy_s(carName, 99, namecar);
	}
	void showinfo() {
		cout << "===============Show information====================" << endl;
		cout <<"name           :" <<name << endl;
		cout <<"age            :"<< age << endl;
		cout <<"nameUniversity :"<<nameUniversity << endl;
		cout <<"hieght         :"<< hieght << endl;
		cout <<"carName        :"<<carName << endl<<endl;
	}
	~crush() {
		cout << "call deconstructor function" << endl;
	}
};
void getinfo(char* name, char* namecar,char*univer, int &age, int &hight) {
	    cout << "==========get information of crush================" << endl;
		cout << "name           :" ;
		cin.getline(name, 99);
		cout << "age            :";
		cin >> age;
		cin.ignore();
		cout << "nameUniversity :";
		cin.getline(univer, 99);
		cout << "hieght         :";
		cin >> hight;
		cin.ignore();
		cout << "carName        :";
		cin.getline(namecar, 99);
		cout << "=====================The End=====================" << endl;
}
int main() {
	int age;
	int hight;
	char* name = new char[100];
	char* namecar = new char[100];
	char* nameuni = new char[100];
	getinfo(name, namecar, nameuni, age, hight);
	crush a(age, name, namecar,nameuni, hight);
	a.showinfo();
	delete name;
	delete namecar;
	delete nameuni;
	return 0;
}