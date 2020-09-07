#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "Tran Ngoc Du <3 !";
    string s1 = "Tran";
    cout << s.empty() << endl;//kiem tra xen mot chuoi co phai la rong khong
    cout << s1.empty() << endl;//kiem tra xem mot chuoi co phai la rong khong
    cout << s.append(s1)<<endl;//noi chuoi s1 vao chuoi s
    cout << s.substr(5,4) << endl;//lay mot chuoi con tu chuoi goc
    cout << s.find(s1) << endl;//tim xem mot chuoi nam o vi chi nao trong chuoi goc
    cout << s.compare(s1) << endl;//so sanh hai chuoi voi nhau
    cout << s.insert(16, s1) << endl;//chen mot chuoi vao mot chuoi khac
    s.clear();
    s1.clear();
    cout << s << s1 << endl;
}