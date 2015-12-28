/* 
 * File:   Person.cpp
 * Author: hoaithu
 *
 * Created on October 6, 2015, 3:27 PM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

/*
 * Xây dựng lớp Person gồm các thông tin: Họ tên, ngày sinh quê quán
 * sau đó xây dựng lớp dẫn xuất kĩ sư ngoài các thông tin của lớp Person
 * lớp kĩ sư có các thông tin về: Nganh học, năm tốt nghiệp và các phương thưc:
 * Phương thức nhập: Nhập các thông tin kĩ sư.
 * Phương thức xuất: in các thông tin lên màn hình.
 * Xây dựng chương trình nhập vào danh sách các kĩ sư. In danh sách của các kĩ sư
 * lên màn hình và thông tin các kĩ sư tốt nghiệp gần đây nhất(Năm tốt nghiệp lớn nhất)
 */
class Person{
public:
    char HoTen[30], QueQuan[50];
    int day, month, year;
};
class KiSu:public Person{
    
};
int main(int argc, char** argv) {

    return 0;
}

