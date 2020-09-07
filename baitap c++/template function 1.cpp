#include<iostream>
using namespace std;
template <class T> T findmax(T a, T b,T c) {
	if (a > b && a> c) {
		return a;
	}
	else if (b > a &&b> c) {
		return b;
	}
	else {
		return c;
	}
}
int main() {
	cout << "gia tri max la :" << findmax<int>(7, 6, 6) << endl;
	return 0;
}