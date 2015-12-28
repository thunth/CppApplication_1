/* 
 * File:   QLSV.cpp
 * Author: hoaithu
 *
 * Created on October 10, 2015, 9:35 AM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

/*
 *Viết chương trình minh họa việc quản lí kết quả thi của một lớp không quá quá 100
 * sinh viên
 * Chương trình gồm 3 lớp: Lớp cơ sở sinh viên(sinh viên) chỉ lưu họ tên và số báo danh
 * lớp điểm thi kế thừa  lớp sinh viên và lưu kết quả môn thi 1 và môn thi 2 
 * lớp kết quả lưu tổng số điểm đạt được của sinh viên;
 * 
 */
class SinhVien{
private:
    char HoTen[30];
protected:
    char SBD[10];
public:
    void Input(){
        fflush(stdin);
        cout<<"\n Nhap so bao danh: "; cin.ignore(); cin.getline(SBD,10);
        cout<<"\n Nhap ho ten sinh vien: "; cin.getline(HoTen,30); cin.ignore();
    }
    void Display(){
        cout<<"\n"<<SBD<<"\t"<<HoTen;
    }
};
class DiemThi:public SinhVien{
protected:
    float MonThi_1, MonThi_2;
public:
    void Diem(){
        SinhVien::Input();
        cout<<"\n Diem thi mom thi 1: ";cin>>MonThi_1;
        cout<<"\n Diem thi mon thi 2: "; cin>>MonThi_2; 
    }
    float getMonThi_1(){
        return MonThi_1;
    }
    float getMonThi_2(){
        return MonThi_2;
    }
    void Display(){
        
        SinhVien::Display();
        cout<<"  \t"<<MonThi_1<<"\t"<<MonThi_2;
    }
};
class KetQua:public DiemThi{
private:
    float TongDiem;
public:
    void Display(){
        DiemThi::Display();
        TongDiem=getMonThi_1() + getMonThi_2();
        cout<<"\t"<<TongDiem;   
    }
};
int main(int argc, char** argv) {
    KetQua *KQ;
    int n;// so sinh vien <=100; 
    do{
        cout<<"\n Nhap so sinh vien: ";cin>>n;
    }while(n>100);
    // NHAP  DANH SACH SINH VIEN
    KQ=new KetQua[n+1];
    for(int i=0;i<n;i++){
        cout<<"\n Nhap sinh vien thu "<<i+1<<": ";
        KQ[i].Diem();
       // KQ[i].Input();
    }
    cout<<"\n KET QUA THI CUA SINH VIEN";
    cout<<"\n SBD\t HoTen \t MonThi_1 \t MonThi_2 \t  Tong Diem \n";
    for(int i=0;i<n;i++){
        KQ[i].Display();
    }
    cout<<endl;
    return 0;
}

