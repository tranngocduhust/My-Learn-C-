#include<iostream>
using namespace std;
template <class A> void agm(A* arr, size_t n) {
	A s = 0;
	for (size_t i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	cout << "Gia tri trung binh cua cac phan tu la:" << s*1.0 / n;
}
int main() {
	int mang[5] = { 1,2,3,4,5 };
	agm<int>(mang, 5);
	return 0;
}