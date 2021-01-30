/*
2. 赋值运算符
作用：用于将表达式的值赋给变量
赋值运算符包括以下几个符合：
=
+=
-=
*=
/=
%=
*/
#include <iostream>
using namespace std;

int main()
{
    // 第一个 =
    int a = 10;
    a = 100;        //运算的东西在这儿呢  作用是：会让原有的值改为这个
    cout << "a = " << a << endl;

    // 第二个 +=
    a = 10;
    a += 2;  //等同于 a= a+2      
    cout << "a = " << a << endl;

    // 第三个 -=
    a = 10;
    a -= 2;  //等同于 a= a-2      
    cout << "a = " << a << endl;

    // 第四个 *=
    a = 10;
    a *= 2;  //等同于 a= a*2      
    cout << "a = " << a << endl;

    // 第五个 /=
    a = 10;
    a /= 2;  //等同于 a= a/2      
    cout << "a = " << a << endl;

    // 第六个 %=
    a = 10;
    a %= 2;  //等同于 a= a%2      
    cout << "a = " << a << endl;

    return 0;
}