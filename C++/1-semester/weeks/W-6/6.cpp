/*      string 字符串型-6 
        substr 函数   
        语句 ： 字符串名.substr(num1,num2) 
                ----代表：返回从num1到num2，但不包含num2 的子字符串
                ----或者可以说返回从num1后的num2个字符 的字符串
        .substr(num)  若括号里至写一个数字，则代表从此数字开始返回到最后
        作用：返回指定的子字符串
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "ABCD" ;
    
    cout << str.substr(0,2) << endl;;  // 返回 从第0个后的2个的子字符串
    cout << str.substr(2);    // 从第2个位置开始返回子字符串
    return 0;
}