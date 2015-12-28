/* 
 * File:   main.cpp
 * Author: hoaithu
 *
 * Created on September 21, 2015, 8:13 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
struct Diem{
    int x;
    int y;
};
int main(int argc, char** argv) {
    int a=1;
    Diem d;
    d.x=1;
    d.y=2;
    
    int *pa=&a;
    int *pb=pa;
    Diem *pd=&d;
    
    cout<<"\n Dia chi nho cua bien a la:"<<&a;
    cout<<"\n gia tri cua bien a la:"<<*pa;
    
    cout<<"\n Diem d ("<<d.x<<"."<<d.y<<")";
    cout<<"\n Diem d ("<<pd->x<<","<<pd->y<<")";
   // delete pd;
    return 0;
}

