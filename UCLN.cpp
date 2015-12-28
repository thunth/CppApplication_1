/* 
 * File:   UCLN.cpp
 * Author: hoaithu
 *
 * Created on October 4, 2015, 4:16 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * Viết chương trình xây dựng một lớp có tên là DATA bao gồm:
- Dữ liệu: a,b là hai số bất kỳ nhập từ bàn phím
- Phương thức: Nhập, xuất dữ liệu, hàm thành phần tìm ước chung lớn nhất của hai
số đó.
Xây dựng hàm main() để kiểm tra
 */
class DATA{
private:
    int a,b;
public:
    DATA(int a1=0, int b1=0){
        a=a1;
        b=b1;
    }
    void Input(){
        cout<<"\n Nhap a="; cin>>a;
        cout<<"\n Nhap b="; cin>>b;
        cout<<endl;
    }
    void Display(){
        cout<<"\n a= "<<a<<" \t "<<"b= "<<b;
    }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
    int UCLN(int a, int b){
        if(a==0 || b==0)
            return (a+b);
        if(a==b)
            return b;
        if(a>b)
            return (a-b,b);
        else 
            return (a,b-a);
    }
};
int main(int argc, char** argv) {
    DATA D, U;
    cout<<"\n nhap hai so tu ban phim:";
    D.Input();
    D.Display();
    cout<<"\n UCLN: "<<D.UCLN(D.get_a(), D.get_b());
    cout<<endl;
    
    return 0;
}

