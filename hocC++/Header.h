#pragma once
#include<iostream>
using namespace std;
namespace space1 {
	int x;
	void function1() {
		cout << "Hello World" << endl;
	}
	
	namespace space2 {
		void function1() {
			cout << "Hello du" << endl;
		}
	}
	void he() {
		cout << "hhh" << endl;
	}
}
