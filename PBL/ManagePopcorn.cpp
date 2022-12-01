#pragma once
#include "ManageProduct.h"
#include "library.cpp"
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

/*
void ManagePopcorn::getPopcornFromDatabase() 
{
    //Khai báo vector để lưu các dòng đọc được
    vector<string> lines;
    string line;
    //Mở file bằng ifstream
    string fileName = "Popcorn.txt";
    ifstream input_file(fileName);
    //Kiểm tra file đã mở thành công chưa
    if (!input_file.is_open()) 
    {
        cout << ("Could not open the file - '" + fileName + "'") << endl;
        return;
    }
    //Đọc từng dòng trong
    while (getline(input_file, line)) 
    {
        lines.push_back(line);//Lưu từng dòng như một phần tử vào vector lines.
    }
    int k = lines.size();
    Popcorn* a = new Popcorn[k];
    int i = 0;
    for (int j = 0; j < k ; j += 4) 
    {
        a[i].setId(lines[j]);
        a[i].setName(lines[j + 1]);
        a[i].setPrice(stoi(lines[j + 2]));
        a[i].setSales(stoi(lines[j + 3]));
        i++;
    }
    // cout << "Number of soda in "<<fileName<<" is: "<< i << endl;
    //Đóng file
    input_file.close();
    // tra ve so luong sinh vien duoc doc tu file
    delete[] p;
    this->length = i;
    this->p = a;
}
*/
