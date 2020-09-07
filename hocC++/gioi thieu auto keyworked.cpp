#include<iostream>
using namespace std;
auto ham() {
	return true;
}
int main() {
	auto a = 1;
	cout << typeid(a).name() << endl;
	cout << typeid(ham()).name();
}