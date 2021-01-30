/*      string 字符串型-2
        getline 语句：  getline (具体要做的语句)
        作用：若只输入cin 会遇到空格就停了，无法输出用空格分隔的2个字符串
              而getline 则可以
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin,x);     
    cout << x << endl;

    return 0;
}