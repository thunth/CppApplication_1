    /* 
 * File:   PhanSo.cpp
 * Author: hoaithu
 *
 * Created on October 4, 2015, 7:25 AM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

/*
 *:Tạo một lớp PS để thực hiện các thao tác số học với phân số trong đó:
- Sử dụng các biến nguyên để biểu diễn các thành phần dữ liệu của tử số và mẫu số
của lớp.
- Xây dựng một constructor để tạo đối tượng, constructor sử dụng các tham số có giá
trị ngầm định.
- Xây dựng hàm thành phần public để thực hiện in phân số ra màn hình dưới dạng
a/b trong đó a là tử số, b là mẫu số; hàm tối giản một phân số.
- Thực hiện chồng toán tử operator cho các thao tác: Cộng, trừ, nhân, chia hai phân
số.
Xây dựng hàm main để kiểm tra lớp đã tạo. 
 */
class PS{
private:
    int TS, MS;
public:
    PS(int ts=0,int ms=1){
        TS=ts;
        MS=ms;
    }
    void Input(){
        cout<<"\n Nhap tu so: "; cin>>TS;
        cout<<"\n Nhap mau so: "; cin>>MS;
    }
    
    int UCLN(int a, int b){
        int x, y;
        x=abs(a);
        y=abs(b);
        if(x*y==0)
            return 1;
        while(x!=y){
            if(x>y)
                x=x-y;
            else
                y=y-x;
        }
        return x;
    }
    friend PS operator+(PS a, PS b){
        PS c;
        c.TS=a.TS*b.MS+b.TS*a.MS;
        c.MS=a.MS*b.MS;
        return c;
    }
    friend PS operator-(PS a, PS b){
        PS d;
        d.TS=a.TS*b.MS-b.TS*a.MS;
        d.MS=a.MS*b.MS;
        return d;
    }
    friend PS operator*(PS a, PS b){
        PS e;
        e.TS=a.TS*b.TS;
        e.MS=a.MS*b.MS;
        return e;
        
    }
    friend PS operator/(PS a, PS b){
        PS f;
        f.TS=a.TS*b.MS;
        f.MS=a.MS*b.TS;
        return f;
    }
    void Display(){
        if( MS<0){
            TS*=(-1);
            MS*=(-1);
        }
        if(TS%MS==0){
            cout<<TS/UCLN(TS,MS)<<"/"<<MS/UCLN(TS, MS);
        }
        else 
            cout<<TS/UCLN(TS,MS)<<"/"<<MS/UCLN(TS, MS);
        
       
    }
};
int main(int argc, char** argv) {
    PS a,b,c,d,e,f;
    cout<<"\n Nhap cac phan so:";
    cout<<"\n Nhap phan so a:";
    a.Input();
    cout<<"\n Nhap phan so b:";
    b.Input();
    cout<<"\n IN HAI PHAN SO :";
    a.Display();
    b.Display();
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    cout<<"\n CAC PHEP TOAN HAI PHAN SO";
    cout<<"\n Tong hai phan so:";
    c.Display();
    cout<<"\n Hieu hai phan so:";
    d.Display();
    cout<<"\n Tich hai phan day: ";
    e.Display();
    cout<<"\n Thuong hai phan so:";
    f.Display();
    cout<<endl;
    return 0;
}

