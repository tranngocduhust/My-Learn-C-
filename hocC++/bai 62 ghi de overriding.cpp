/*
                        Bài 62:Ghi đè -Overriding
        Chức năng:Là khi lớp cha chưa biết lớp con muốn làm gì nên chỉ định nghĩa những đặc điểm chung nhất
        Và lớp con muốn sử dụng lại các phương thức của lớp cha theo cách của riêng nó.
        -Chú ý :Các phương thức override ở lớp con phải giống hệt với lớp cha từ tên hàm, kiểu,tham số,...
        -Cách làm: sử dụng từ khóa virtual ở đầu các kiểu hàm cha và sử dụng overrid ở hàm con
        -Khi truy xuất sử dụng con trỏ <kiểu con trỏ > *ten=new <lớp con> ();   ten->phương thức
*/
#include<iostream>
using namespace std;
class animal {
public:
    virtual void move() {
        cout << "animal can move......." << endl;
    }
};
class cat :public animal {
    void move() override {
        cout << "cat move by foot" << endl;
    }
};
class bird :public animal {
public:
    void move() override {
        cout << "bird can fly......" << endl;
    }
};
int main() {
    animal* a = new bird();
    a->move();
    a = new animal();
    a->move();
}