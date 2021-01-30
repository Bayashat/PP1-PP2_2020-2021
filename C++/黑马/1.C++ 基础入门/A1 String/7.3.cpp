/*
●针对stringstream类别的初始化
这边要提到一点就是要重复使用一个stringstream的情況，因為宣告stringstream类别的時候其實蛮消耗CPU的时间，
在解题目以及应用的時候不太建议重复宣告，而是使用完之后就初始化再次利用。
基本就是要以下这兩行:
*/
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    ////////基本的初始化stringstream
    stringstream s1;
    s1.str("");
    s1.clear();
}
/*
這邊有個重點就是s1.str("");    s1.clear();
這兩行基本上缺一不可，缺少了任一行就會導致某些情況下的錯誤。
*/