/* 
 * File:   newmain.cpp
 * Author: hoaithu
 *
 * Created on October 2, 2015, 8:29 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*xay dung lop Date. Du lieu thanh phna bao gom: ngay, thang, nam. Cac ham thanh phan bao gom
 * ham tao, ham truy cap du lieu, ham normalize() de chuan hoa du lieu nam trong khoang
 * quy dinh cua ngay(1<=ngay<=daysIn(thang)), thang(1<=thang<=12),nam(nam>=1), 
 * ham daysIn(int) tra ve so ngay trong thang, ham advance(int y, int m, int d)de tang 
 * ngay hiem len cac nam y, thang m, ngay d cua doi tuong dang ton tai va mot ham in de hien
 * thi du leu.
 * 
 */
class Date{
private:
    int day, month, year;
public:
    //ham tao
    void creat(){
        cout<<"\n Input the value of day:"; cin>>day;
        cout<<"\n Input the value of month:"; cin>>month;
        cout<<"\n Input the value of year:"; cin>>year;
    }
    // ham lay ngay
    int get_day(){
        return day;
    }
    //ham lay thang
    int get_month(){
        return month;
    }
    //ham lay nam
    int get_year(){
        return year;
    }
    //ngay trong thang
    int     DaysIn(int month){
        int DaysIn;
        switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                DaysIn=31;
                break;
            case 4: case 6: case 9: case 11:
                DaysIn=30;
                break;
            case 2:
                if(year%4==0)
                    DaysIn==29;
                else 
                    DaysIn=28;
                break;
        }
        return DaysIn;
    }
    void nomalize(){
        if(day<1 || day>DaysIn(month))
            cout<<"\n please input the value of day agian!";
        if(month<1 || month>12)
            cout<<"\n please input the value of month again!";
        if(year<1)
            cout<<"\n please input the value of year again!";
    }
    int advance(int day, int month, int year){
        day=day+1;
        return day;
        
    }
    void In(){
        cout<<"\n day: "<<advance(day, month, year);
        cout<<"\n month: "<<month;
        cout<<"\n year:"<<year;
    }
    
};
int main(int argc, char** argv) {
    Date a;
    a.creat();
    cout<<endl;
    a.nomalize();
    cout<<endl;
    a.In();
    return 0;
}

