#include<iostream>
using namespace std;
class Person {
private:
	static int ma;
	char ho[50];
	char dem[50];
	char ten[50];
	int tuoi;
	char gioitinh[50];
	char diachi[50];
	char sdt[50];
public:
    static int n;
	Person();
	int k = 0;
	void setho(char* ho);
	void setdem(char* dem);
	void setten(char* ten);
	void settuoi(int tuoi);
	void setgioitinh(char* gioitinh);
	void setdiachi(char* diachi);
	void setsdt(char* sdt);
	char* getho();
	char* getdem();
	char* getten();
	int   gettuoi();
	char* getgioitinh();
	char* getdiachi();
	char* getsdt();
	static int getma();
	void ShowInfo();
	void Fullname();
	void fullget(); 
};
int Person::ma = 100;
int Person::n = 0;
int main() {

	Person s[50];
	for (size_t i = 0; i < 50; i++)
	{
		s[i].fullget();
		if (s[i].k == 1) {
			break;
		}
	}
	for (size_t i = 0; i < s[i].n; i++)
	{
		s[i].ShowInfo();
	}
	return 0;
}

Person::Person() {
	ma++;
	strcpy_s(ho, 49, "Tran");
	strcpy_s(dem, 49, "Ngoc");
	strcpy_s(ten, 49, "Du");
	tuoi = 19;
	strcpy_s(gioitinh, 49, "Nam");
	strcpy_s(diachi, 49, "Huong Canh-Binh Xuyen-Vinh Phuc");
	strcpy_s(sdt, 49, "0386081262");
}
void Person::setho(char* ho) {
	strcpy_s(this->ho, 49, ho);
}
void Person::setdem(char* dem) {
	strcpy_s(this->dem, 49, dem);
}
void Person::setten(char* ten) {
	strcpy_s(this->ten, 49, ten);
}
void Person::settuoi(int tuoi) {
	this->tuoi = tuoi;
}
void Person::setgioitinh(char* gioitinh) {
	strcpy_s(this->gioitinh, 49, gioitinh);
}
void Person::setdiachi(char* diachi) {
	strcpy_s(this->diachi, 49, diachi);
}
void Person::setsdt(char* sdt) {
	strcpy_s(this->sdt, 49, sdt);
}
char* Person:: getho() {
	return ho;
}
char* Person::getdem() {
	return dem;
}
char* Person::getten() {
	return ten;
}
int Person::gettuoi() {
	return tuoi;
}
char* Person::getgioitinh() {
	return gioitinh;
}
char* Person::getdiachi() {
	return diachi;
}
char* Person::getsdt() {
	return sdt;
}
int Person:: getma() {
	return ma;
}
void Person:: ShowInfo() {
	cout << "====================ShowInfo=====================" << endl;
	cout << "                      Person " << ma << endl;
	cout << "ho        : " << ho << endl;
	cout << "dem       : " << dem << endl;
	cout << "ten       : " << ten << endl;
	cout << "tuoi      : " << tuoi << endl;
	cout << "Gioi tinh : " << gioitinh << endl;
	cout << "Dia chi   : " << diachi << endl;
	cout << "SDT       : " << sdt << endl;
	cout << "======================The End====================" << endl;
}
void Person:: Fullname() {
	cout << "===========FullName===========" << endl;
	cout << "           Person " << ma << endl;
	cout << ho << " " << dem << " " << ten << endl;
	cout << "============The End===========" << endl;
}
void Person:: fullget() {
	cout << "=================Get Person================" << endl;
	cout << "Ho:";
	cin.getline(ho, 49);
	if (strcmp(ho, "!") == 0) {
		k = 1;
		return;
	}
	cout << "Dem:";
	cin.getline(dem, 49);
	cout << "Ten:";
	cin.getline(ten, 49);
	cout << "Tuoi:";
	cin >> tuoi;
	cin.ignore();
	cout << "Gioi Tinh:";
	cin.getline(gioitinh, 49);
	cout << "Dia chi:";
	cin.getline(diachi, 49);
	cout << "SDT:";
	cin.getline(sdt, 49);
	n++;
	cout << "==================The End=================" << endl;
}