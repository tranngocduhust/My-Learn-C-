#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(0));
	int a;
	a = 5 + rand() % 10;
	char* mangdong;
	mangdong = new char[21];
	cout << "nhap ten xe ban muon mua :";
	cin.getline(mangdong, 20);
	cout << "\ngia cua xe " << mangdong << " la:" << a<<" trieu usd"<<endl;
	delete[] mangdong;
	return 0;
}