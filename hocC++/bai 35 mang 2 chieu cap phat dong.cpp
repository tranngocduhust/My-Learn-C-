/*
                         Mảng 2 chiều cấp phát động
                Chức năng giống như mảng 1 chiều cấp phát động là để tránh lãng phí bộ nhớ.
           -Cách sử khai báo ,cấp phát: <kieu du lieu> ** <ten mang>;
           -khai báo số mảng 1 chiều (số chiều) : mang=new <kieu du lieu> *[so phan tu cua mang]
           -Khai báo số phần tử của một chiều(số cột) -sử dụng vong for để khai báo như mảng động một chiều.
            !!! chú ý không sử dụng hàm fill trong cap phát động mảng 2 chiều.
 */
#include<iostream>
using namespace std;
int main() {
    int** mang;
    mang = new int*[3];// so hang
    for (size_t i = 0; i < 3; i++)
    {
        mang[i] = new int[3];
    }
    for ( size_t i = 0; i <3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin>>mang[i][j];
        }

    }
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << mang[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}