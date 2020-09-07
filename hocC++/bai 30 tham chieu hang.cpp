/*
       -Mục đích của truyền tham chiếu hằng là để đảm bảo đối số truyền vào không thay đổi giá trị 
	   để từ đó có thể dễ dàng kiểm soát chương trình khi gặp lỗi
	   -Cách thức thực hiện là thêm từ khóa const vào trước kiểu dữ liệu
	   -chú ý:trong hàm main nếu ta dùng từ khóa const thì ko truyền được tham chiếu 
  
*/

#include<iostream>
using namespace std;
int tong(int& a, int& b) {
	return a + b;
}
int main() {
	int a = 1;
	int b = 2;
	cin >> a >> b;
	cout << "tong la :" << tong(a, b)<<endl;
	cout << a << endl;
	cout << b;
	return 0;
}