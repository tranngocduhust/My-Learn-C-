#include<iostream>
using namespace std;
int main() {
	char xau[100];
	int tuoi;
	cout << "nhap tuoi cua ban vao ban phim :";
	cin >> tuoi;
	cin.ignore();
	cout << "nhap ho va ten cua ban:";
	cin.getline(xau, 99);
	cout << "hello " << xau << " ban da " << tuoi << " roi a!\n";
	return 0;
}