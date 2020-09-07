/*
                       Tổng quan về con trỏ
			 Khi ta khai báo một biến thì bộ nhớ máy tính sẽ tự động đánh một địa chỉ ngẫu nhiên cho
			 biến đó.
*/

#include<iostream>
using namespace std;
int main() {
	
	int a =2,b=5;
	cout << "dia chi cua bien a la" << endl;
	cout << &a<<endl;
	cout << "dia chi cua bien b la" << endl;
	cout << &b << endl;
	int* ptr;
	ptr = &a;
	cout << "dia chi cua con tro la " << endl;
	cout << ptr << endl;
	cout << "gia tri cua con tro la :" << *ptr << endl;
	ptr = &b;
	cout << "dia chi cua con tro la " << endl;
	cout << ptr << endl;
	cout << "gia tri cua con tro la :" << *ptr << endl;

}