#include<iostream>
using namespace std;
int main() {
	

	int* ptr = new int(3);//cap phat vung nho cho con tro ptr de tro den vung nho dong chua gia tri la 3
	delete ptr;
	int* iptr = new int;//cap phat vung nho cho con tro iptr nhung khong tro den dau ca;
	delete iptr;
	int* nprt = NULL;
	delete nprt;
	float* fptr = new float(3.5);
	delete fptr;
	int* mang = new int[10];
	delete[] mang;
	float* fprt;
	float a = 100;
	fprt = &a;
	fprt = NULL;
	delete fprt;
	int** mangdong=new int*[20];
	for (size_t i = 0; i < 20; i++)
	{
		mangdong[i] = new int[10];
	}
	for (size_t i = 0; i < 20; i++)
	{
		delete[] mangdong[i];
	}
	delete [] mangdong;
	return 0;
}
