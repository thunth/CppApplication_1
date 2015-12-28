/* 
 * File:   ToaDo.cpp
 * Author: hoaithu
 *
 * Created on October 9, 2015, 8:41 PM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

/*
 * Xây dựng một lớp điểm gồm các thuộc tM(x,y,z) là tọa độ của một điểm bất kì
 * Xây dựng toán tử nạp chồng + để tính tọa độ M bất kì trên tọa O(x, y, z)
 * biết rằng tọa độ M là tổng tọa độ hai diểm M1 M2;
 */
class Diem{
private:
    float x, y, z;
public:
    Diem(){
        float x=0;
        float y=0;
        float z=0;
    }
    void Input(){
        cout<<"\n Input x: "; cin>>x;
        cout<<"\n Input y: "; cin>>y;
        cout<<"\n Input z: "; cin>>z;
    }    
    void Display(){
        cout<<"\n Toa do vua nhap: ";
        cout<<"\n x= "<<x<<" \t"<<"y= "<<y<<"\t "<<"z= "<<z<<endl;
    }
    friend Diem operator+(Diem M1, Diem M2){
        Diem M;
        M.x= M1.x + M2.x;
        M.y= M1.y + M2.y;
        M.z= M1.z + M2.z;
        return M;
    }
};
int main(int argc, char** argv) {
    Diem M, M1, M2;
    cout<<"\n Nhap toa do diem M1:";
    M1.Input();
    cout<<"\n Nhap Toa do diem M2:";
    M2.Input();
    cout<<"\n M1:";
    M1.Display();
    cout<<"\n M2:";
    M2.Display();
    M= M1+ M2;
    cout<<"\n M:";
    M.Display();
    return 0;
}

