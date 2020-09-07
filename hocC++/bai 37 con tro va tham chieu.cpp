#include<iostream>
using namespace std;
int ham1(int* a) {
	*a = *a + 1;
	return *a;
}
int ham2(int& a) {
	a = a + 1;
	return a;
}
int main() {
	int a = 4;
	cout << "gia tri cua a ban dau la :" << a << endl;
	cout << "gia tri cua a sau khi truyen ham1 la :" << ham1(&a)<<endl;
	cout << "gia tri cua a sau khi truyen ham2 la :" << ham2(a) << endl;

}