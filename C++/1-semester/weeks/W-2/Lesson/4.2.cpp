//Shift Right (用于二进制十进制)
//  2. >>   语法：第一个数字(a) >> 第二个数字(b)
//十进制作用： a/(2^b)
//二进制作用：比如(a=24,b=2),24就是 11000 ，然后 24>>2 就代表 把它后面的两个数字划掉，那么剩110，十进制就是6
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << (a>>b) << endl;
   
    return 0;
}