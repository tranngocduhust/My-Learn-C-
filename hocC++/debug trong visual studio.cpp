#include<iostream>
using namespace std;
int tong(int start, int theend) {
	int i = 0,s=0;
	for (i = start; i <= theend; i++) {
		s = s + i;
	}
	return s;
}
int main() {
	int start, end;
	cout << "nhap gia tri start va end vao ban phim" << endl;
	cin >> start >> end;
	cout << "tong cac so tu start den end la :" << tong(start, end)<<endl;
	return 0;
}