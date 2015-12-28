/* 
 * File:   SoPhuc.cpp
 * Author: hoaithu
 *
 * Created on October 4, 2015, 3:15 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * Tạo một lớp Complex để thực hiện các thao tác số học với các số phức trong đó:
Số phức có dạng : <Phần thực> + <Phần ảo> *j
- Sử dụng các biến thực để biểu diễn các thành phần dữ liệu riêng của lớp.
- Xây dựng một constructor để tạo đối tượng, constructor sử dụng các tham số có giá
trị ngầm định.
- Xây dựng hàm thành phần public để thực hiện in số phức ra màn hình dưới dạng
(a, b) trong đó a là phần thực, b là phần ảo.
- Thực hiện chồng toán tử operator cho các thao tác : Cộng, trừ, nhân, chia hai số
phức.
Xây dựng hàm main để kiểm tra lớp đã tạo.
 */
class Complex{
private:
    float a,b;// a=Phan thuc; b=phan ao;
public:
    Complex(float a1=0, float b1=0){
        a=a1;
        b=b1;
    }
    void Input(){
        cout<<"\n Nhap phan thuc: "; cin>>a;
        cout<<"\n Nhap phan ao: "; cin>>b;
        cout<<endl;
    }
    void Display(){
        cout<<"("<<a<<","<<b<<")";
        cout<<endl;
    }
    friend Complex operator+(Complex c, Complex d){
        Complex e;
        e.a=c.a+d.a;
        e.b=c.b+d.b;
        return e;
    }
    friend Complex operator*(Complex c, Complex d){
        Complex f;
        f.a=c.a*d.a -c.b*d.b;
        f.b=c.a*d.b + d.a*c.b;
        return f;
    }
    friend Complex operator-(Complex c, Complex d){
        Complex g;
        g.a=c.a-d.a;
        g.b=c.b-d.b;
        return g;
    }
    friend Complex operator/(Complex c, Complex d){
        Complex h;
        h.a=(c.a*d.a+c.b*d.b)/(d.a*d.a+d.b*d.b);
        h.b=(-c.a*d.b + d.a*c.b)/(d.a*d.a+d.b*d.b);
        return h;
    }
};
int main(int argc, char** argv) {
    Complex c, d, e, f, g, h;
    cout<<"\n Nhap hai so phuc:";
    cout<<"\n Nhap so phuc c:";
    c.Input();
    cout<<"\n Nhap so phuc d:";
    d.Input();
    cout<<endl;
    e=c+d;
    f=c*d;
    g=c-d;
    h=c/d;
    cout<<"\n KET QUA CAC PHET TOAN";
    cout<<"\n Tong hai so phuc:";
    e.Display();
    cout<<"\n Hieu hai so phuc:";
    g.Display();
    cout<<"\n Tich hai so phuc:";
    f.Display();
    cout<<"\n phep chia hai so phuc:";
    h.Display();
    return 0;
}

