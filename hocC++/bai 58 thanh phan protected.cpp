/*
                            Bài 58:Thành phần protected
                    Chức năng:Có phạm vi truy cập thấp hơn public nhưng cao hơn private.
                    Nó cho phép các thành phần bên trong class hoặc các lớp kế thừa truy cập
*/
#include<iostream>
using namespace std;
class f0 {
protected:
    int a = 1;
};
int main(){
    f0 s;
    cout << s.a;//không thể truy cập được bên ngoài vào một protected trong class

}