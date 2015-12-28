/* 
 * File:   ThiSinh.cpp
 * Author: hoaithu
 *
 * Created on October 9, 2015, 7:05 AM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

/*
 *Xay dung lop thuoc tinh gom:SBD, ho ten , diem thi
 *Xay sung lop tuyen sinh moi dan xuat tu lop thi sinh bo sung them thuoc tinh khu vuc
 * (gia su khu vuc 1,2,3). Neu khu vuc 1 cong 3 diem, khu vuc hai cong 2 diem
 * khu vuc 3 cong 1 diem.
 * Viet chuong trinh nhap thong tin cho n thi sinh, nhap diem chuan in ra danh sach
 * thi sinh trung tuyen.
 */
class ThiSinh{
private:
    char SBD[10], HoTen[30];
    float Diem;
public:
    void Input(){
        cout<<"\n Nhap so bao danh: ";cin.ignore(); cin.getline(SBD,10);
        cout<<"\n Nhap ho va ten: "; cin.getline(HoTen,30); cin.ignore();
        cout<<"\n Nhap diem: "; cin>>Diem;
        cout<<endl;
    }
    void Display(){
        cout<<"=====DANH SACH THI SINH===";
        cout<<"\n Ho va Ten: "<<HoTen<<"\t "<<"SBD: "<<SBD<<"\t"<<"Diem thi: "<<Diem;
        cout<<endl;
        
    }
    float getDiem(){
        return Diem;
    }
};
class TuyenSinh:public ThiSinh{
private:
    int KV;// khu vuc: 1,2 ,3;
public:
    void Input(){
        ThiSinh::Input();
        do{
        cout<<"\n Nhap khu vuc: "; cin>>KV;
        }while(KV<1 || KV>3);
    }
    float TongDiem(){
        float DiemCong;
        if(KV==1)
            DiemCong=3;
        if(KV==2)
            DiemCong=2;
        return DiemCong +getDiem();
    }
    void Display(){
        ThiSinh::Display();
        cout<<"  KV:"<<KV<<"\t "<<"Tong diem: "<<TongDiem();
        cout<<endl;
    }
   
};
int main(int argc, char** argv) {
    TuyenSinh *TS;
    int n;// so thi sinh
    do{
        cout<<"\n Nhap so thi sinh: "; cin>>n;
    }while(n<=1);
    TS= new TuyenSinh[n+1];
    for(int i=0;i<n;i++){
        cout<<"\n Nhap thi sinh thu "<<i+1<<": ";
        TS[i].Input();
    }
    // nhap diem chuan;
    float DiemChuan; 
    cout<<"\n Nhap diem chuan: ";
    cin>>DiemChuan;
    for(int i=0;i<n;i++){
        if(TS[i].TongDiem() > DiemChuan)
            TS[i].Display();
        
    }
    return 0;
}

