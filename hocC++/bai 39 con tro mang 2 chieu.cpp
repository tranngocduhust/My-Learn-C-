#include<iostream>
using namespace std;
void mang1(int a[][10]) {
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << *(*(a + i) + j) << " ";
			
		}
		cout << endl;
	}
}
void mang2(int* a[10]) {
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
}
void mang3(int** a) {
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++) {
			cout << *(*(a + i)+j) << " ";

		}
		cout << endl;
	}
}
int main() {
	int a[10][10];
	fill(a[0], a[0] + 10 * 10, 5);
	int* b[10];
	for (size_t i = 0; i < 10; i++)
	{
		b[i] = new int[10];
	}
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			b[i][j] = 9;
		}

	}
	
	mang2(b);
	cout << endl << endl;
	int** c;
	c = new int* [10];
	for (size_t i = 0; i < 10; i++)
	{
		c[i] = new int[10];
	}

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			c[i][j] = 8;
		}

	}
	mang3(c);
}