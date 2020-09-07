/*
               Tính đóng gói của dữ liệu-Public
            Chức năng giúp ta thay đổi được các thuộc tính trong Private
            Cấu tạo bao gồm 2 thành phần chính là hàm set (thường thuộc kiểu void) có chức năng thay đổi
            thông tin của thuộc tính và hàm get(thường kiểu trả về) có chức năng lấy thông tin riêng lẻ
            !!Khi khởi tạo hàm ra bên ngoài class thì phải có ::
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
public:
    student();
    void setage(int &Age);
    void setscore(int &Scores);
    void setid(char* Id);
    void setname(char* Name);
    void setnameUniversity(char* NameUni);
    int  getage();
    int  getscore();
    char* getid();
    char* getname();
    char* getnameUniversity();
    void showInfo();
};
int main() {
    int score;
    int age ;
    char* name = new char[100];
    char* nameUni = new char[100];
    char* id = new char[50];
    cin >> score;
    cin >> age;
    cin.ignore();
    cin.getline(name, 99);
    cin.getline(nameUni, 99);
    cin.getline(id, 45);
    student s;
    s.setage(age);
    s.setscore(score);
    s.setid(id);
    s.setname(name);
    s.setnameUniversity(nameUni);
    s.showInfo();
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
}
void student::setage(int &Age) {
    age = Age;
}
void student::setscore(int &Scores) {
    scores = Scores;
}
void student::setid(char* Id) {
    strcpy_s(id, 49, Id);
}
void student::setname(char* Name) {
    strcpy_s(name, 99, Name);
}
void student::setnameUniversity(char* NameUni) {
    strcpy_s(nameUniversity, 99, NameUni);
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
char * student::getname() {
    return name;
}
char* student::getnameUniversity() {
    return nameUniversity;
}