/*
                          Gán giá trị cho trước cho mảng một chiều hoặc hai chiều.
	  Cách 1:Dùng vòng lặp for
      Cách 2:Dùng hàm fill(phần tử đầu tiên,phần tử cuối cùng,giá trị muốn gán)
	  Cụ thể: -trong mảng 1 chiều thì fill(mang+x,mang+y,gia tri) có nghĩa là bắt đầu từ phần từ 
			  x+1 đến phần tử thứ y.
			  -Trong mảng 2 chiều thì fill(mang[0],mang[0]+x*y,giá trị) có nghĩa là bắt đầu từ phần tử đầu
			  tiên đến phần tử thứ X*y.
		   Còn lại thì làm như bình thường.
*/

#include<iostream>
using namespace std;
int main() {
	//int mang[10];
	int manghaichieu[10][10];
	//fill(mang, mang + 10, 4);
	fill(manghaichieu[0], manghaichieu[0] + 10 * 10, 1);
	fill(manghaichieu[0]+1*1, manghaichieu[0]+ 5*5, 0);
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << manghaichieu[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}