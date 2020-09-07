#include<iostream>
#include<fstream>
using namespace std;
void show(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";

	}
	cout << "\nThe End" << endl;
}
int main() {
	fstream s1("input.txt",ios::in);
	int n;
	s1 >> n;
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		s1 >> arr[i];
	}
	show(arr, n);
	delete[]arr;
	s1.close();
	return 0;
}