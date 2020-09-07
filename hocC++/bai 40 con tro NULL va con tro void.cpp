#include<iostream>
using namespace std;
void ham(void* contro, int a) {
	if (a == sizeof(int)) {
		int* b = (int*)contro;
		cout << *b
			<< endl;
	}
	else if (a == sizeof(double)) {
		double* b = (double*)contro;
		cout << *b << endl;
	}
	else {
		char* b = (char*)contro;
		cout << *b << endl;
	}
	
}

int main() {
	int* ptr;
	int a = 4;
	ptr = &a;
	ham(ptr, sizeof(int));
	ham(ptr, sizeof(char));
}