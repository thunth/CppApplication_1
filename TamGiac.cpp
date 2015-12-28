/* 
 * File:   TamGiac.cpp
 * Author: hoaithu
 *
 * Created on October 3, 2015, 7:20 AM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>

using namespace std;

/*
 * xay dung lop tam giac de mo ta cac doi tuong tam giac bao gom cac ham thanh phan nhu sau:
 * ham tao, ham nhap, ham xuat, ham kiem tra ba canh cua tam giac co hop le khoong
 * phan loai tam giac tinh chu vi, tinh dien tich.
 */
class TamGiac{
private:
    double a, b, c; // ba canh cua tam giac
public:
    TamGiac(double aa=0, double bb=0, double cc=0){
        a=aa;
        b=bb;
        c=cc;
    }
    void Nhap();// nhap ba canh cua tam giac
    void Xuat();// xuat thong tin tam giac
    int HopLe();// kiem tra xem ba canh cua tam giac co hop le khong   
    void PhanLoai();// phan loai tam giac
    double ChuVi();// tinh chu vi cua tam giac
    double DienTich();// tinh dien tich cua tam giac
 
};
void TamGiac::Nhap(){
    cout<<"\n Nhap ba canh cua taam gac";
    cout<<"\n Nhap canh a= "; cin>>a;
    cout<<"\n Nhap canh b= "; cin>>b;
    cout<<"\n Nhap canh c= "; cin>>c;
    
}
void TamGiac::Xuat(){
    cout<<"\n Thong tin cua tam giac:";
    cout<<"a="<<a<<"\t "<<"b="<<b<<"\t "<<"c="<<c;
}
int TamGiac::HopLe(){
    if(a>0 && (b>0) && (c>0) && (a+b>c) && (a+c>b) && (b+c>a))
        return 1;
    else 
        return 0;
}
void TamGiac::PhanLoai(){
    if(((a!=b) && a!=c) || (b!=c)&& (b!=a) || (c!=a)&& (c!=b)){
        if(a==b || b==c || a==c)
            cout<<"\n Tam giac can."<<endl;
        else if((a*a==(b*b + c*c))|| (b*b==(a*a + c*c)) ||(c*c==(a*a + b*b)))
            cout<<"\n Tam giac vuong."<<endl;
        else
            cout<<"\n Tam giac thuong."<<endl;         
    }
    else 
        cout<<"\n Tam giac deu"<<endl;
}
double TamGiac::ChuVi(){
    return (a+b+c);
}
double TamGiac::DienTich(){
    double P, S;
    P=(a+b+c)/2;
    S=sqrt(P*(P-a)*(P-b)*(P-c));
    return S;
}
int main(int argc, char** argv) {
    int HL;
    double CV,DT;
    TamGiac TG;
    TG.Nhap();
    TG.Xuat();
    cout<<endl;
    HL=TG.HopLe();
    
    if(HL==1){
        cout<<"\n Ba canh cua tam giac hop le."<<endl;
       TG.PhanLoai();
       CV=TG.ChuVi();
       cout<<"\n Chu vi cua tam giac: "<<CV<<endl;
       DT=TG.DienTich();
       cout<<"\n Dien tich cua tam giac: "<<DT<<endl;
     }
    else 
        cout<<"\n ba canh cua tam giac khong hop le."<<endl;
    return 0;
}

