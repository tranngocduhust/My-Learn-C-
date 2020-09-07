#include<iostream>
using namespace std;

class HCN {
private:
	int chieudai = 5;
	int chieurong = 4;
public:
	friend class HV;
};
class HV {
public:
	int getsd(HCN a) {
		return a.chieudai;
	}
};
int main() {
	HV a;
	HCN b;
	cout << a.getsd(b) << endl;
	return 0;
}