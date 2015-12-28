/* 
 * File:   NV.cpp
 * Author: hoaithu
 *
 * Created on September 22, 2015, 9:01 PM
 */

#include <cstdlib>

using namespace std;

/*
 * + Yêu c?u: Vi? chuong trình th?c hi?n
1. Nh?p vào thông tin c?a m?t nhân viên IT:
- Ho ten
- Tuoi
- Vi tri lam viec
- He so luong
- So nam cong tac
2. In thông tin c?a nhân viên v?a nh?p
3. Tính luong cho nhân viên
luong = he so luong * luong co ban + phu cap.
Trong dó: 
ph? c?p = 1.2 luong co b?n n?u s? nam công tác > 3,
ngu?c l?i ph? c?p bang 1 luong co b?n.
4. Tính thu? thu nh?p mà nhân viên ph?i tr?.
N?u luong > 5.000.000 thì thu? = 10% luong, ngu?c l?i thu? = 0.

 */
#include<iostream>
#include<string.h>
#include<stdio.h>
#define LCB 1050000;
class NV_IT{
  private:
      char HoTen[20], VT[10];
      int Tuoi, SoNamCT;
      float HSL;
public:
    void Nhap_IT();
    void IN_IT();
};
void NV_IT::Nhap_IT(){
  int n;
  cout<<"\n Nhap so nha vien:"; cin>>n;
  
  for(int i=0;i<n;i++){
      fflush(stdin);
      cout<<"\n Nhap nhan vien thu "<<i+1; cin.get(HoTen,20);
      cin.ignore(1);
      cout<<"\n Tuoi:"; cin>>Tuoi;
      cin.ignore(1);
//      cout<<"\n Vi tri lam viec:"; fgets(VT,10,stdin);
//      cin.ignore(1);
//      cout<<"\n HSL:"; cin>>HSL;
//      cin.ignore(1);
//      cout<<"\n So nam cong tac:"; cin>>SoNamCT;
//      cin.ignore(1);
 }

}
int main(int argc, char** argv) {
    NV_IT IT;
    IT.Nhap_IT();
    return 0;
}

