/* 
 * File:   DaThuc.cpp
 * Author: hoaithu
 *
 * Created on October 4, 2015, 1:35 PM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

/*
 *Xây dựng lớp đa thức: Bậc của đa thức, hệ số của đa thức. các hàm của lớp 
 * bao gồm: Hàm nhập hàm xuất, cộng hai đa thức, hàm bạn của lớp tính giá trị của 
 * đa thức tại một số thực cho trước.
 * Viết chương trình nhập vào hai đa thức P, Q, tìm biểu thức tổng. 
 * nhập vào số thực d và tính sqrt(p(d)-q(d)) 
 */
class DT{
private:
    int n; //n bac cua da thuc;
    float *m;//m he so cua da thuc;
public:
//    DT(int n1=0,float m1=0){
//        n=n1;
//        m=m1;
//    }
    void Nhap_DT(){
        cout<<"\n Nhap bac cua da thuc n= "; cin>>n;
        m=new float[n+1];
        for(int i=0;i<= n;i++){
            cout<<"\n Nhap he so thu "<<i<<":";
            cin>>m[i];
        }
//        while(m[n]==0){
//            cout<<"\n nhap he so ung voi bac "<<n<<" khac khong :";
//            cin>>m[n];
//        }
    }
    void Xuat_DT(){
        cout<<"\n bac:"<<n<<"\n cac he so:";
        for(int i=0;i<=n;i++){
            cout<<i<<"\t";
//            cout<<endl;
        }
    }
    DT Cong(DT Q){
        DT R, P=*this;
        int i,min;
        
        min=(P.n<Q.n)?P.n:Q.n;
        R.n=(P.n>Q.n)?P.n:Q.n;
        R.m=new float[R.n+1];
//        if(P.n<Q.n)
//            min=Q.n;
//        else
//            min=P.n;
////        for(i=0;i<=min;i++){
////            
////        }
//        if(P.n>Q.n)
//            R.n=P.n;
//        else
//            R.n=Q.n;
        for(i=0;i<=min;i++)
            R.m[i]=P.m[i]+Q.m[i];
        for(i=min+1;i<=R.n;i++){
            if(R.n==Q.n)
                R.m[i]=Q.m[i];
            else 
                R.m[i]=P.m[i];
        }
        return R;
    }
};
int main(int argc, char** argv) {
    DT P,Q,R;
    cout<<"\n Nhap da thuc P:";
    P.Nhap_DT();
    cout<<"\n Nhap da thuc thu Q:";
    Q.Nhap_DT();
    cout<<endl;
    R=P.Cong(Q);
    cout<<"\n R =P+Q: ";
    R.Xuat_DT();
    cout<<endl;
    return 0;
}

