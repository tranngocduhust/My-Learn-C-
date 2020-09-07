/*
                      Bài 53:Hàm nguyên mẫu-template function
          -Chức năng:để giảm thiểu số lần viết hàm.
          -Cách sử dung:
          + template <class T> (........hàm như bình thường......) trong đó T là type data muốn truyền vào.
          +để gọi hàm trong main thì dùng ham<data type> (truyền tham số như bình thường).
*/
#include<iostream>
template <class T> T findmax(T a, T b) {
    return a > b ? a : b;
}
using namespace std;
int main() {
    cout << findmax<int>(4, 5);
    return 0;
}