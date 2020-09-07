/*
                      Bài 54: Lớp nguyên mẫu-Template class
            Chức năng:tương tự như hàm template
            Cách sử dụng: Xem code dưới

*/
#include<iostream>
#include<string>
using namespace std;
template<class U, class V> class tudien {
private:
    U key;
    V mean;
public:
    tudien(U a, U b);
    void show();
};
int main() {
    tudien <string, string> s("hello", "xin chao");
    s.show();
}
template<class U,class V> tudien<U,V>:: tudien(U a, U b) {
    key = a;
    mean = b;
}
template <class U,class V> void tudien<U,V>:: show() {
    cout << "=====================" << endl;
    cout << "Key :" << key << endl;
    cout << "Mean:" << mean << endl;
    cout << "=====================" << endl;
}