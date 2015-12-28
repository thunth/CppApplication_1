/* 
 * File:   Vector.cpp
 * Author: hoaithu
 *
 * Created on October 3, 2015, 1:31 PM
 */

#include <cstdlib>
#include <iostream>
#include<math.h>
using namespace std;

/*
 * xay dung mot lop vector de mo ta cac doi tuong trong khong gian n chieu va thuc hien
 * cong viec: nhap toa do, xuat toa do, cong tru hai vector, nhan vo huong hai vector
 */
class Vector{
private:
    int x,y;
public:
    void Nhap();
    void Xuat();
    void Cong_Tru_Nhan(Vector, Vector );
};
///
void Vector::Nhap(){
    cout<<"\n Nhap x= "; cin>>x;
    cout<<"\n Nhap y= "; cin>>y;
    cout<<endl;
}
void Vector::Xuat(){
    cout<<"\n In vector :";
    cout<<"x= "<<x<<"\t "<<"y= "<<y;
    cout<<endl;
}
void Vector::Cong_Tru_Nhan(Vector A, Vector B){
    Vector C,D,E;
    // tinh tong hai vector
    C.x=A.x+B.x;
    C.y=A.y+B.y;
    cout<<"\n Tong hai vector:";
    C.Xuat();
    // hieu hai vector
    D.x= A.x -B.x;
    D.y= A.y -B.y;
    cout<<"\n Hieu haii vector:";
    D.Xuat();
    // Nhan hai vector
//    E=A.x*B.x+A.y*B.y;
//    E=A.x*B.x+A.y*B.y;
        
}
int main(int argc, char** argv) {
    Vector V, A, B;
    cout<<"\n Nhap vector A:";
    A.Nhap();
    cout<<"\n Nhap vector B:";
    B.Nhap();
    V.Cong_Tru_Nhan(A,B);
    return 0;
}

