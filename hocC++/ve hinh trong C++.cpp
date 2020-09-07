#include<iostream>
using namespace std;
void ve(int mang[][10],int n) {
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (mang[i][j] == 1) {
				cout << "* ";
			}
			else if (mang[i][j] == 0) {
				cout << "  ";
			}
			else if (mang[i][j] == 3) {
				cout << "//";
			}
			else {
				cout << "@ ";
			}
		}
		cout << endl;
	}

}
int main() {
	//ve con bo
	int mang[9][10]={
		{0,1,1,0,0,0,0,0,0,0},
		{0,1,1,1,1,1,1,0,0,0},
		{0,1,1,1,0,0,0,1,1,0},
		{3,0,0,1,0,0,0,1,0,1},
		{0,0,0,1,0,0,0,1,0,1},
		{0,0,0,0,1,1,1,0,0,1},
		{0,0,0,0,1,0,1,0,1,1},
		{0,0,0,0,1,0,1,0,0,0},
		{0,0,0,0,2,0,2,0,0,0}
	};
	ve(mang, 10);

}