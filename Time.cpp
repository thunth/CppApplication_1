/* 
 * File:   Time.cpp
 * Author: hoaithu
 *
 * Created on October 3, 2015, 3:12 PM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>
using namespace std;

/*
 *viet chuong trinh xay dunmg lop co ten la time
 * de nhap: gio, phut giay bat ki tu ban phim,
 * hay xac dinh gio, phut, giay, lon nhat trong cac tham so bat ki tu ban phim  
 */
class Time{
private:
    int gio, phut, giay;
public:
    // ham tao
    Time(int gio1=0, int phut1=0, int giay1=0){
        gio=gio1;
        phut=phut1;
        giay=giay1;
    }
    void Nhap_Time(){
        do{
            cout<<"\n Nhap gio:"; cin>>gio;
            cout<<"\n Nhap phut:"; cin>>phut;
            cout<<"\n Nhap giay:"; cin>>giay;
        }while(gio<0 || phut<0 || giay<0);
    }
    void HienThi(){
        cout<<" "<<gio<<":"<<phut<<":"<<giay<<endl;
    }
    int sec(){
        return 3600*gio+60*phut+giay;
    }
//    // nhap bo thoi gian.
//    void Nhap(){
//        
//    }
};
int main(int argc, char** argv) {
//    Time T;
//    T.Nhap_Time();
//    T.HienThi();
    int n;
    Time T[10];
    cout<<"\n Nhap bo thoi gian n:"; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n Nhap thoi gian thu "<<i+1<<endl;
        T[i].Nhap_Time();
        cout<<endl;
    }
    cout<<"\n Bo thoi gian da nhap la:"<<endl;
    for(int i=0;i<n;i++){
        T[i].HienThi();
        cout<<setw(3);
        cout<<endl;
    }
    Time Max=T[0];
    for(int i=0;i<n;i++){
        if(Max.sec()<T[i].sec())
            Max=T[i];
    }
    cout<<"\n Thoi gian lon nhat: ";
    Max.HienThi();
    
    return 0;
}

