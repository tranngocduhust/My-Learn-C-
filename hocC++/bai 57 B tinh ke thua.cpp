/*
                     Bài 57:Tính kế thừa.
			Chú ý :có 3 loại access mordifier :
			+private:Lớp con sẽ chuyển tất cả các mordifier của lớp cha về dạng private cho lớp con kế tiếp
			+protected:Lớp con sẽ chuyển tất cả các mordifier của lớp cha về dạng protected
			+public:Sẽ giữ nguyên của lớp cha.
			                                  
*/

#include<iostream>
using namespace std;
class father {
private:
	string name;
protected:
	string email;
public:
	int age;
};
class father1 :public father {
	void test();
};
class father2 :private father1 {
	void test2();
};
void father2::test2() {
	cout << email;
}
void father1::test() {
	cout << name;//khong the truy cap truc tiep vao thanh phan private cua lop cha.
	cout << email;
	cout << age;
}

