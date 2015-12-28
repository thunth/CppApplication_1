/* 
 * File:   PT_BacNhat_2An.cpp
 * Author: hoaithu
 *
 * Created on October 10, 2015, 9:02 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 *Viết chương trình giải phương trình bậc nhất hai ẩn bằng cách sử dụng kế thừa
 */
class HPTB1{
//private:
    
public:
    float a1, a2, b1, b2, c1, c2, x, y;
    void Input(){
        cout<<"\n Input a1= "; cin>>a1;
        cout<<"\n Input a2= "; cin>>a2;
        cout<<"\n Input b1= "; cin>>b1;
        cout<<"\n Input b2= "; cin>>b2;
        cout<<"\n Input c1= "; cin>>c1;
        cout<<"\n Input c2= "; cin>>c2;
        cout<<endl;
    }
    void Display(){
        cout<<"\n He phuong trinh co nghiem: ";
        cout<<"\n x= "<<x<<"\t "<<"y= "<<y;
        cout<<endl;
    }
};
class GHPTB1:public HPTB1{

//private:
    
public:
    float D, Dx, Dy;
    void Nghiem(){
        D =a1*b2 - a2*b1;
        Dx=c1*b2-b1*c2;
        Dy=a1*c2 - a2*c1;
        if(D!=0){
            x=Dx/D;
            y=Dy/D;
        }
        if(D==0){
            if( Dx!=0 && Dy!=0)
            cout<<"\n He phuong trinh vo nghiem.";
            if(Dx==0 && Dy==0)
                cout<<"\n he phuong trinh vo so nghiem.";
            cout<<endl;
    }
    }
    
};
int main(int argc, char** argv) {
    GHPTB1 PT;
    PT.Input();
    PT.Nghiem();
    PT.Display();
    cout<<endl;
    return 0;
}