/*
                       Lớp -Class
          Class hiểu nôm na nó như là một cái khuôn,để tạo ra các đối tượng.
          Trong class có thuộc tính(là các thông tin về đối tượng) và phương thức(hành động của đối tượng)
          Các thành phần trong class không được công khai ra bên ngoài ,vì vậy nếu muốn sử dụng phải dùng 
          public: để công khai sử dụng.
          Khai báo và sử dụng class giống như struct.
*/
#include<iostream>
using namespace std;
class crush {
public:
    // thuộc tính của crush
    int height;
    int weight;
    char name[100];
    char hisuniversityname[100];
    // phương thức
    void dance() {

    }
    void sing() {

    }
};
int main() {
    crush a;
    cout << "ten crush : ";
    cin.getline(a.name, 99);
    cout << a.name << endl;
}