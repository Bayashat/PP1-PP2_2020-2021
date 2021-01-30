#include<iostream>
#include <iostream>  
using namespace std;    

int f(int a,int n);

int main()
{
    int x;
    cin >> x;
    string s = "test";
    //s  = n+48 错误示范， 我们无法将数字直接并到字符串后面
    s = char(x+48) + s; // 我们需要把它加48，因为48在ASCII上是 ""
    return 0;
}