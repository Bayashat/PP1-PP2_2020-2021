//Shift Left (用于二进制十进制)
// 1. <<   语法：第一个数字(a) << 第二个数字(b)
//十进制作用： a*(2^b)
//二进制作用：比如(a=5,b=2),5 就是 101 ，然后 5<<2 就代表 2 个零在101 后面补上，为10100，转为十进制就是20.

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b ;
    cout << (a << b) << endl;





    return 0;
}