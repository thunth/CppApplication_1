/* 
 * File:   SoNguyenTo.cpp
 * Author: hoaithu
 *
 * Created on October 8, 2015, 8:09 PM
 */

#include <cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

/*
 *Nhap vao day so nguyen in ra man hinh so nguyen to
 * tim bo bon so lien tiep co tich lon nhat 
 */
// ham kiem tra so nguyen to.
int Test_Prime(int N){
    if(N==1)
        return 0;
    if(N==2)
        return 1;
    if(N%2==0)
        return 0;
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0)
            return 0;
        else 
            return 1;
    }
}
// viet lop 
class Prime{
private:
    int n, *a;
public:
    // ham tao khong doi, 
    // chu y: ten ham tao phai trung voi ten lop
    Prime(){
        n=0;
        a=NULL;
    }
    ~Prime(){
        delete a;
    }
    void Input(){
        cout<<"\n Input n: "; cin>>n;
        a= new int[n+1];
        cout<<"\n Input row: ";
        for(int i=0;i<n;i++){
            cout<<"\n Input secondary element "<<i+1<<": ";
            cin>>a[i];
            cout<<endl;
        }
    }
    void Display(){
        cout<<"\n Output row";
        for(int i=0;i<n;i++){
            cout<<a[i]<<"  ";
            cout<<endl;
        }
    }
    void Prime1(){
        for(int i=0;i<n;i++){
            if(Test_Prime(a[i])==1){
                cout<<"\n Prime is:";
                cout<<a[i]<<"  ";
                cout<<endl;
            }
        }
    }
    void Built_max(){
        int max, vt;// vt=location;
        if(n<4)
            cout<<"\n the number does not exist!";
        else{
            max=a[1]*a[2]*a[3]*a[4];
            vt=0;
            for(int i=1;i<n-3;i++){
                if(max<a[i]*a[i+1]*a[i+2]*a[i+3])
                    max=a[i]*a[i+1]*a[i+2]*a[i+3];
                    vt=i;
            }
            cout<<"\n built four primes max = "<<max;
            cout<<"\n location: "<<a[vt]<<"\t"<<a[vt+1]<<"\t"<<a[vt+2]<<"\t"<<a[vt+3];
            cout<<endl;
        }
    }
};
int main(int argc, char** argv) {
    Prime P;
    P.Display();
    P.Input();
    P.Prime1();
    P.Built_max();
    return 0;
}

