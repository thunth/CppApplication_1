/* 
 * File:   VienPhi.cpp
 * Author: hoaithu
 *
 * Created on October 10, 2015, 3:13 PM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

/*
 * Xây dựng lớp cơ sở bệnh nhân gồm:
 * Thuộc tính: họ tên, quê quán, năm sinh
 * Phương thức nhập, xuất thông tin
 * +) Xây dựng lớp bệnh án kế thừa từ lớp bệnh nhân
 * Thuộc tính: tên bệnh án, số tiền viện phí
 * Phương thức: Nhập, xuất thông tin, tính tuổi hiện tại
 * +) Chương trình thực hiện nhập danh sách N bệnh án
 * Sắp xếp danh sách giảm dần theo tuổi giảm dần của các bệnh nhân
 * Hiện ra màn hình danh sách nạn nhân tuổi <=10;
 * Cho biết thông tin các bệnh nhân có tiền viện phí cao nhất.
 * 
 */
class BenhNhan{
private:
    char HoTen[20], QueQuan[30];
protected:
    int NamSinh;
public:
    void Input(){
        fflush(stdin);
        cout<<"\n  Ho ten benh nhan: "; cin.ignore(); cin.getline(HoTen,20);
        cout<<"\n  Que quan benh nhan: "; cin.getline(QueQuan,30); 
        do{
        cout<<"\n  Nam sinh: "; cin>>NamSinh;
        }while(NamSinh<1);
   }
////    int getNamSinh(){
////        return NamSinh;
//    }
    void Display(){
        cout<<"\n"<<HoTen<<"\t"<<QueQuan<<"\t"<<NamSinh;
    }           
};
class BenhAn:public BenhNhan{
private:
    char TenBenhAn[20];
protected:
    int VienPhi;
public:
    void Input(){
        BenhNhan::Input();
        fflush(stdin);
        cout<<"\n Ten benh an: ";cin.ignore(); cin.getline(TenBenhAn,20); 
        cout<<"\n Vien Phi: "; cin>>VienPhi;
    }
    int TinhTuoi(){
        int TuoiHienTai;
//        cout<<"\n Nam hien tai: "; cin>>NamHienTai;
        TuoiHienTai=2015-NamSinh;
        return TuoiHienTai;
    }
    int getVienPhi(){
        return VienPhi;
    }
    void Display(){
        BenhNhan::Display();
        cout<<"\t"<<TenBenhAn<<"\t"<<VienPhi;
    }
};

int main(int argc, char** argv) {
    BenhAn *BA,TG;
    int n;// so benh nhan
    do{
        cout<<"\n So benh nhan: "; cin>>n;
    }while(n<=0);
    BA=new BenhAn[n+1];
    for(int i=0;i<n;i++){
        cout<<"\n Nhap benh nhan thu "<<i+1<<": ";
        BA[i].Input();
               
    }
    cout<<"\n danh sach:";
    for(int i=0;i<n;i++){
        BA[i].Display();
        cout<<endl;
    }
//     sap xep
  int i;
    for( i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++){
           if(BA[j].TinhTuoi()>BA[i].TinhTuoi()){
                 TG=BA[i];
               BA[i]=BA[j];
               BA[j]=TG;
               // VT=i; 
            }
        }
        
    cout<<"\n Thong tin benh nhan giam dan ve tuoi:";
    for(int i=0;i<n;i++){
      BA[i].Display();
      cout<<endl;
    }
   cout<< "Daqnh sach benh nhan duoi 10 tuoi";
   cout<<endl;
    for(int i=0;i<n;i++){
        if(BA[i].TinhTuoi()<=10)
            
            BA[i].Display();
    }
    // benh nhan co vien phi cao nhat
    int VienPhi_max=BA[0].getVienPhi(), vt;
    for(int i=0;i<n;i++){
        if(VienPhi_max<BA[i].getVienPhi())
            VienPhi_max=BA[i].getVienPhi();
            vt=i;
        
    }
    
    cout<<"\n Benh nhan co vien phi cao nhat: ";
    BA[vt].Display();
   
      //Display();
    cout<<endl;
    return 0;
}

