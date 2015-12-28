/* 
 * File:   Lich_Nam.cpp
 * Author: hoaithu
 *
 * Created on October 9, 2015, 8:02 AM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>

using namespace std;

/*
 * Viet chuong trinh in  ra ngay cua mot thang cua mot nam bat ki
 */
class Lich{
private:
    int day, month, year;
public:
    int SoNgay(int month, int year);// int month; int year;
    bool NamNhuan(int year); // int year;
    void InLich(int month,int year); // int month; int month;
    int ThuDauTien(int month, int year); // int thang; int monht;
//    long int getYear();
//    long int getMonth();
//    long int day_count();
};
// so ngay cua moi thang
bool Lich ::NamNhuan(int year){
    return ((year%4==0 && year%100!=0) ||( year%400==0));    
}
int Lich :: SoNgay( int month, int year){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
         
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
         //   break;
        case 2:
        if(NamNhuan(year))
            return 29;
        else
            return 28;

    }
    return 0;
}
long int getMonth(int month){
    long int result;
    if(month<=2)
        result=month+13;
    else
        result=month+1;
    return (result);
}
long int getYear(int month, int year){
    long int result;
    if(month<=2)
        year -=1;
    result=year;
    return (result);
}
int day_count(int month, int year){
    long int number;
    number=1461*getYear(month, year)/4 + 153*getMonth(month)/5 +1;
    return (number);
}
int Lich ::ThuDauTien(int month, int year){
    long int Number_of_Days;
    int Day_of_Weeks;
    Number_of_Days=day_count(month, year);
    Day_of_Weeks = (Number_of_Days - 621049)%7 ;
    return Day_of_Weeks;
}
void Lich::InLich(int month,int year){
    int Ngay_D=ThuDauTien(month, year);
    if(Ngay_D==0)
       Ngay_D=7;
    int SN = SoNgay(month, year);
    cout<<"\n MON \t TUE \t WEN \t THU \t FRI \t SAT \t SUN \n";
    for(int i=1;i <= Ngay_D -1;i++)
         cout<<"\t";
    for(int i=1;i <= SN;i++){
            cout<< i <<"\t";
            if((i+ Ngay_D -1) % 7 == 0)
            cout<<endl;
    }
}

int main(int argc, char** argv) {
    Lich L;
    int year;
    char Select;
    do{
        do{
            cout<<"\n Nhap vao nam(>1700): ";
            cin>>year;
        }while(year <= 1700);
        for(int i=1;i<=12;i++){
            cout<<"\n Thang "<<i<<":"<<endl;
             L.InLich(i,year);
            cout<<endl;
        }
        cout<<"\n Ban co muon tiep tuc khong(y/n)?";
        cin>>Select;
        system("cls");
    }while(Select=='y');
    cout<<endl;
    return 0;
}

