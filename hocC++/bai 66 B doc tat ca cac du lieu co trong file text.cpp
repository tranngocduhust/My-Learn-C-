#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	string number;
	ifstream s1("input2.txt", ios::in);
	while(!s1.eof()) {
		getline(s1, number);
		cout << number << endl;
	}
	s1.close();
	return 0;
}