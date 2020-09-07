/*
                           Con tro và mảng một chiều.
			Mảng là một con trỏ hàng.
			Đia chỉ của mảng chính là địa chỉ của phần tử đâu tiên trong mảng.
			Con trỏ có các phép toán +;-;++;--;>=;<=;==

*/

#include<iostream>
using namespace std;
void ptr(int* a) {
	int* contro=a;
	
	for (contro;contro < &a[9];contro++)
	{
		cout << *contro << " ";
		
	}
}
int main() {

	int mang[] = { 1,2,3,4,5,6,7,8,9 };
	int* ptr1 = &mang[1];
	int* ptr2 = &mang[2];
	ptr1 = ptr1 + 1;

	for (size_t i = 0; i < 9; i++)
	{
		cout << "dia chi cua phan tu thu i la :" << &mang[i] << endl;
	}
	
	cout << (ptr1 == ptr2)<<endl;
	return 0;

}

