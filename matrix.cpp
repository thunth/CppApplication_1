    /* 
     * File:   newmain.cpp
     * Author: hoaithu
     *
     * Created on September 30, 2015, 7:35 AM
     */

    #include <cstdlib>
    #include<iostream>
    #include<math.h>
    using namespace std;

    /*
     * Xây dựng lớp ma trận có tên là Matrix cho các ma trận, các hàm thành phần bao
    gồm: hàm tạo mặc định, hàm nhập xuất ma trận, cộng, trừ, nhân hai ma trận
     */
    class MaTrix{
    private:
        int a[50][50], b[50][50];
        int m,n,p,q;   // so hang so cot cua ma tran
    public:
        //ham tao mac dinh
        MaTrix(int a1=0,int b1=0){
            for(int i=0;i<50;i++)
                for(int j=0;j<50;j++){
                    a[i][j]=a1;
                    b[i][j]=b1;

                }
        }  
        //ham nhap
         void Nhap(){
             cout<<"\n -------------Nhap ma tran A:---------------";
             cout<<"\n Nhap so hang m:"; cin>>m;
             cout<<"\n Nhap so cot n: ";cin>>n;
             for(int i=0;i<m;i++)
                 for(int j=0;j <n;j++){
                     cout<<"\n a["<<i<<"]"<<"["<<j<<"]=";
                     cin>>a[i][j];
            }
             cout<<"\n -------------Nhap ma tran B------------";
             cout<<"\n Nhap so hang m:"; cin>>p;
             cout<<"\n Nhap so cot k:"; cin>>q;
             for(int i=0;i<p;i++)
                 for(int j=0;j<q;j++){
                     cout<<"\n b["<<i<<"]"<<"["<<j<<"]=";
                     cin>>b[i][j];
                 }
         }
         // ham xuat
         void Xuat(){
             cout<<"\n Ma tran A:\n ";
             for(int i=0;i<m;i++){
                 cout<<"\n";
                 for(int j=0;j<n;j++)
                     cout<<a[i][j]<<"  ";
            }
             cout<<"\n Ma tran B:\n";
             for(int i=0;i<p;i++){
                 cout<<"\n";
                for(int j=0;j<q;j++)
                    cout<<b[i][j]<<"  "; 
                 cout<<"\n";                                    
            }
        }

         void Cong_Tru_Nhan(){
             int Cong[50][50];
             int Tru[50][50];
             int Nhan[50][50];
             //cong hai ma tran.
             cout<<"\n tong hai ma tran:"<<endl;
             if(m==p && n==q){
                 for(int i=0;i<m;i++)
                     for(int j=0;j<n;j++)
                         Cong[i][j]=a[i][j]+b[i][j];
                
                for(int i=0;i<m;i++){
                    cout<<"\n";                   
                    for(int j=0;j<n;j++)               
                        cout<<Cong[i][j]<<"  ";
                        cout<<"\n";             
                }
             }
             else
                 cout<<"\n khong thuc hien duoc!";            
                    
         }    
    };
    int main(int argc, char** argv) {
        MaTrix MT;
        MT.Nhap();
        MT.Xuat();
        MT.Cong_Tru_Nhan();
        //int m,n, Cong;
        
        return 0;
    }