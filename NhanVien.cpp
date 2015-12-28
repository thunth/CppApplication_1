/* 
 * File:   newmain.cpp
 * Author: hoaithu
 *
 * Created on October 3, 2015, 8:24 AM
 */


#include <cstdlib>
#include <cstdio>
#include<string.h>
#include<iostream>

using namespace std;

/*
 * xây dựng lớp nhân viên với thuộc tính:mã nhân viên,họ tên, phòng lương 
 * với các phương thức nhâp, xuất, 
 * viết chương trình phòng có tổng số lương cao nhất.
 */
class NhanVien{
private:
    char MaNV[10];
    char HoTen[30];
    int Phong;
public:
    void Input(){
       // fflush(stdin);
        cout<<"\n Nhap ma nhan vien:";cin.ignore(); cin.getline(MaNV,10);
        cout<<"\n Nhap ho ten:"; cin.getline(HoTen,30); cin.ignore();
        cout<<"\n Nhap phong:"; cin>>Phong; //cin.ignore();
       
    }
    int getNV(){
        return HoTen[30];
    }
    int getPhong(){
        return Phong;
    }
    int getMaNV(){
        return MaNV[10];
    }
    void Display(){
        cout<<"\n Nhan vien:"<<HoTen<<"\t "<<"Phong:"<<Phong;
        cout<<endl;
    }
};
int main(int argc, char** argv) {
    NhanVien *NV;
    
    int n;// so nhan vien
    cout<<"\n Nhap so nhan vien: "; cin>>n;
    NV=new NhanVien[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\n Nhap nhan vine thu "<<i+1;
        NV[i].Input();
        //cin.ignore();
        
        cout<<endl;
        
    }
//    cout<<"\n DANH SACH NHAN VIEN";
//    for(int i=0;i<n;i++){
//        NV[i].getPhong();
//        cout<<"\n Ho ten"<<NV[i].getNV();
//    }
//    
   
    return 0;
}

