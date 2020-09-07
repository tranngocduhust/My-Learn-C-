/*
                            Giới thiệu về vector
            -Chức năng:Thay thế mảng thường hoặc mảng cấp phát động vì vector có thể tự co dãn số lượng phần 
            tử tùy thích.
            -Cách khai báo :vector <type data> namevector.
               VD vector <int> a;
            -Các phương thức trong vector:
             +Kích thước của một vector: size()  (thể hiện số phần tử có trong một vector)
               VD a.size();
             +Thêm một phần tử vào cuối của một vector: dùng push_back(giá trị muốn thêm)
               VD a.push_back(5);
             +Xóa một phần tử ở cuối một vector :dùng pop_back()
               VD a.pop.back();
             +Xóa cả một vector :dung clear()
               VD a.clear();
             +Chèn một phần tử vào một vector :dùng insert(vị trí,so lượng)
               VD a.insert(a.begin(),5)
             +Xóa phần tử của một vector ở một vị trí bất kì:dùng erase(vị trí đầu,vị trí kết thúc);
               VD a.erase(a.begin(),a.begin()+2);
             +Gán các giá trị cho các phần tử của vector:dùng assign(số lượng phần tử,giá trị)
               VD a.assign(4,5);
             +Để xuất giá trị đầu tiên dùng front()
               VD a.front()
             +Để xuất giá trị cuối cùng dùng back()
               VD a.back();
             +Để truy cập đến phần tử thứ i và lấy kết quả thì dùng at()
               VD a.at(1);
             +Muốn xác định vị trí của các phần tử trong vector thì dùng interator như begin() hay end()
             gần giống con trỏ;

*/
#include<iostream>
#include<vector>
using namespace std;
void showif(vector<int> a) {

    for (auto i=a.begin();i<a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main() {
    vector <int> a;
    a.push_back(40);
    a.push_back(41);
    a.push_back(42);
    a.push_back(43);
    //a.pop_back();
    cout <<"Kich thuoc cua mot vector:"<< a.size() << endl;//kích thước của một vector
    showif(a);
    cout << "Phan tu dau tien:" << a.front() << endl;
    cout << "Phan tu cuoi cung:" << a.back() << endl;
    cout << "==========================" << endl;
    a.insert(a.begin()+1, 5);
    showif(a);
    cout << "==========================" << endl;
    a.erase(a.begin() + 2,a.end());
    showif(a);
    cout << "==========================" << endl;
    a.assign(5, 115);
    showif(a);
    a.clear();
}


