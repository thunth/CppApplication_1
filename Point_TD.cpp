/* 
 * File:   Point_TD.cpp
 * Author: hoaithu
 *
 * Created on October 10, 2015, 7:59 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * Xây dựng lớp Point với kiểu dữ liệu nguyên để biểu diễn tọa độ của mmotj điểm
 * Xây dựng lớp constructor để tạo đối tượng, constructor sử dụng các tham số có giá trị
 * ngâmf định.
 * xây dựng hàm thành phần public display() để  thực hiện in điểm ra màm hình
 * Xây dựng hàm di chuyển điểm đến một tọa độ mới
 * xây dựng hamf chồng toán tử operator- để lấy điểm đối xứng qua gốc tọa độ
 * xây dựng lớp main để kiểm tra lớp tạo
 * 
 */
class Point{
private:
    int x, y;
public:
    Point(){
        x=0;
        y=0;
    }
    void Input(){
        cout<<"\n Input x: "; cin>>x;
        cout<<"\n Input y: "; cin>>y;
        cout<<endl;
    }
    void Display(){
        cout<<"\n( "<<x<<", "<<y<<")";
        cout<<endl;
    }
    void TinhTien(){
        int x1, y1; // x1, y1 la toa do cua vector v, vector v la phep bien hinh cua M->M';
        cout<<"\n Input x1: "; cin>>x1;
        cout<<"\n Input y1: "; cin>>y1;
        cout<<"\n Toa do moi cua diem M:("<<x+x1<<", "<<y+y1<<")";
        cout<<endl;
    }
     Point operator-(Point N){
        N.x=-1*N.x;
        N.y=-1*N.y;
        return N;
    }
};
int main(int argc, char** argv) {
    Point M,N;
    cout<<"\n Input M: ";
    M.Input();
    cout<<"\n M";
    M.Display();
    cout<<"\n Toa do moi cua diem M: ";
    M.TinhTien();
    cout<<endl;
    N=N-M;
    cout<<"\n Diem doi xung: ";
    N.Display();
    return 0;
}

