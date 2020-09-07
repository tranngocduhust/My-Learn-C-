/*
                           Bài 61:Nạp chồng toán tử.
        -Lý thuyết:Nạp chồng toán tử có nghĩa là ta sử dụng dữ liệu mà ta tự định nghĩa để thực hiện
         với các phép toán.
        -Cách làm:Có 2 cách .
        +Sử dụng hàm thành phần: Kiểu của hàm + operater + phép toán+(kiểu tham số _tham số)
        +Sủ dụng hàm bạn:friend +kieur của hàm+operater+phép toán+(các tham số....)
        -Chú ý :Nếu sủ dụng hàm thành phần để nạp chồng toán tử thì ta chỉ cần truyền vào một tham số
        còn tham số còn lại trước dấu nạp chồng(+ ,-,*,/) được hiểu ngầm định là nó đã gán vào các thuộc tính.

*/
#include<iostream>
using namespace std;
class phanso {
private:
    int tu;
    int mau;
public:
    phanso();
    phanso(int a, int b);
    void show();
    phanso operator +(phanso& b);
    friend phanso operator -(phanso& A, phanso& B);
};

int main() {
    phanso a(2, 5);
    phanso b(3, 5);
    phanso c = a + b;
    phanso d = a - b;
    c.show();
    d.show();
}
phanso::phanso() {
    tu = 0;
    mau = 1;
}
phanso::phanso(int a, int b) {
    tu = a;
    mau = (b == 0) ? 1 : b;
}
void phanso::show() {
    cout << tu<< "/"<< mau<<endl;
}
phanso phanso:: operator +(phanso& b) {
    phanso s;
    s.tu = tu * b.mau + mau * b.tu;
    s.mau = mau * b.mau;
    return s;
}
 phanso operator -(phanso& A, phanso& B) {
    phanso k;
    k.tu = A.tu * B.mau - A.mau * B.tu;
    k.mau = A.mau * B.mau;
    return k;
}

 