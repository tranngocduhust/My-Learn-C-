/* 
                   Bài 60: Nạp chồng hàm -function overloading
-Chức năng:Trong lập trình hướng đối tượng thì chương trình có khả năng tự phân biệt được các
 hàm có tên giống nhau(chức năng) nhưng có tham số truyền vào là khác nhau(về kiểu,số lương,thứ tự,..)
-Chú ý:Các hàm chỉ phân biệt được với nhau khi khác nhau về tham số chứ ko phân biệt dựa vào kiểu của hàm được
-Vì tính đa hình là một trong 4 tính chất của lập trình hướng đối tượng nên nó chỉ sử dụng được trong class

*/
#include<iostream>
using namespace std;
class object {
public:
    int sum(int a, int b) {
        return a + b;
    }
    float sum(float a, float b) {
        return a * b;
    }
    float sum(float a, int b) {
        return a / b;
    }
    //int sum(float a, int b) {
    //    //lỗi vì nó không phân biệt dựa vào kiểu của hàm
    //}

};
int main() {
    object a;
    cout << a.sum(3.f, 5);
}