#include<iostream>
using namespace std;
template <class A> void FindMax(A*arr,size_t n) {
	A tem = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (tem < arr[i]) {
			tem = arr[i];
		}
	}
	cout << "gia tri max la :" << tem << endl;
}
int main() {
	int n;
	cout << "Nhap so phan tu cua mang:";
	cin >> n;
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	FindMax<int>(arr, n);
	delete arr;
	return 0;
}