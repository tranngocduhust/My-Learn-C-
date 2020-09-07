#include<iostream>
#include<string>
using namespace std;
int main() {
	string name("heeeeee");
	string nam(name);
	cout << nam<<endl;
	string nx(10, 'l');//chi cho lap 1 li tu
	cout << nx;
	//string name;
	//cout << "Enter your name:";
	//getline(cin, name);
	///*cout << "Hello " << name << endl;
	//cout << "Your name have " << name.length() << " characters" << endl;
	//for (size_t i = 0; i < name.length(); i++)
	//{
	//	cout << name.at(i) << " ";
	//}*/
	//name.push_back('H');//chi cho them 1 ki tu vao cuoi
	//name.push_back('M');
	//cout << name;
	//name.pop_back();
	//name.pop_back();
	//cout << endl << name;
	return 0;
}