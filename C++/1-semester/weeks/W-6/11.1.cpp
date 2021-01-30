/*      string 字符串型-11
            find 函数    
        语句1：变量1.find(变量2)        ///表示在变量1里找变量2开始的位置
        语句2：变量1.find(变量2，num)   ///表示在变量1里从num位置查找变量2开始的位置
*/        
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "testtesttest";
    string x = "tt";

    cout <<  str.find(x)<< endl;   // 结果为3。
    cout <<  str.find(x,5);        // 结果为7
    return 0;
}