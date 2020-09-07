/*
                                         Con trỏ this
                     -Khái niệm:Con trỏ this là một đối tượng ngầm định giữ tham chiếu của đối tượng mà ta
                     đang thao tác có liên hệ đến phương thức chứa con trỏ this đó.
                     -Lưu ý:Trong các phương thức nếu ta sử dụng tên biến thì có hai trường hợp xảy ra.
                           +Trường hợp 1:Nếu biến không được khởi tạo trong phương thức mà có tên trùng với
                           tên của thuộc tính thì mặc định đó là thuộc tính
                           +Trường hợp 2:Nếu biến đó mà được tạo trong phương thức thì mặc định đó là biến
                           bình thường.
                    -Con trỏ this có chức năng phân biệt giữa biến của thuộc tính và tham số khi chúng có tên
                    giống nhau.
                    Ví dụ:this->name=name; thì this->name là thuộc tính còn name là biến tham số.
*/
#include<iostream>
using namespace std;
class student {
private:
    int age;
    int scores;
    char id[50];
    char name[100];
    char nameUniversity[100];
    static int count;
public:
    student();
    void setage(int Age);
    void setscore(int Scores);
    void setid(char* Id);
    void setname(char* Name);
    void setnameUniversity(char* NameUni);
    int  getage();
    int  getscore();
    char* getid();
    char* getname();
    char* getnameUniversity();
    void showInfo();
    //chú ý là hàm static không thể truy cập được tất cả các thành phần không phải static
     static int getcout() {
        return count;
      }
    
};
int student::count = 0;
 
int main() {
    student s, s1, s2, s3, s4;
    cout << s.getcout() << endl;// su dung khi stactic ơ private
    cout << student::getcout() << endl;//su dung khi static ở private
    //cout<<s.count<<endl;
    //cout<<student::cout<<endl;  khi static ở public.
    return 0;
}

void student::showInfo() {
    cout << "=====================Show Information================" << endl << endl;
    cout << "Name          : " << name << endl;
    cout << "NameUniversity: " << nameUniversity << endl;
    cout << "Age           :" << age << endl;
    cout << "Id            :" << id << endl;
    cout << "Scores        :" << scores << endl;
    cout << "\n=======================The End=======================" << endl;
}
student::student() {
    age = 19;
    scores = 9;
    strcpy_s(id, 49, "Huong Canh Binh Xuyen");
    strcpy_s(name, 99, "Tran Ngoc Du");
    strcpy_s(nameUniversity, 99, "HUST");
    count++;
}
void student::setage(int age) {
    this->age = age;
}
void student::setscore(int scores) {
    this->scores = scores;
}
void student::setid(char* id) {
    strcpy_s(this->id, 49, id);
}
void student::setname(char* name) {
    strcpy_s(this->name, 99, name);
}
void student::setnameUniversity(char* nameUniversity) {
    strcpy_s(this->nameUniversity, 99, nameUniversity);
}
int student::getage() {
    return age;
}
int student::getscore() {
    return scores;
}
char* student::getid() {
    return id;
}
char* student::getname() {
    return name;
}
char* student::getnameUniversity() {
    return nameUniversity;
}