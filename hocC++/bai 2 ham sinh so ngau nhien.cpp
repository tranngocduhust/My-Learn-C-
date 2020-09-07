/*
                        Bản chất của hàm sinh số ngãu nhiên.
			Hàm srand(int a) nhận vào một số nguyên a gọi là seed để tạo ra một giá trị mới gọi là seed mới ,với mỗi giá trị a
			khác nhau thì tạo ra một seed khác nhau.Thường người ta sử dụng hàm time(0) để tạo ra seed đầu vào khác nhau.
			Hàm rand sẽ dựa vào seed vừa được tạo ra để chọn ngẫu nhiên một số b trong bộ mà người dùng đã yêu cầu.Sau đó 
			nếu hàm rand tiếp tục được gọi thì nó sẽ sử dụng giá trị b làm seed tiếp theo để chọn ngẫu nhiên ra số c tiếp theo
			

*/

#include<iostream>
using namespace std;
int main() {
	int a;
	a = 2 + rand() % 1;
	a = 1 + rand() % 10;
	cout << a << endl;
}