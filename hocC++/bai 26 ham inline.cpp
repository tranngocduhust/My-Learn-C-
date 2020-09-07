#include<iostream>
using namespace std;
inline int tong(int a, int b) {
	return a + b;
}
int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << "tong cua " << a << " va " << b << " la:" << tong(a, b);
	return 0;
}