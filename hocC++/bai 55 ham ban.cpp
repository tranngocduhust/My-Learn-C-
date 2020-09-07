#include<iostream>
using namespace std;
class HV;
class HCN {
	int chieudai;
	int chieurong;
	int dientich;
public:
	HCN() {
		chieudai = 4;
		chieurong = 5;
		dientich = chieudai * chieurong;
	}
	friend int max(HCN,HV);
};
class HV {
	int dodai;
	int dientich;
public:
	HV() {
		dodai = 5;
		dientich = dodai * dodai;
	}
	friend int max(HCN,HV);
};

int max(HCN a,HV b) {
	if (a.dientich > b.dientich) {
		return a.dientich;
	}
	else {
		return b.dientich;
	}
}

int main() {
	HCN a;
	HV b;
	cout << "S max la :" << max(a, b);
}