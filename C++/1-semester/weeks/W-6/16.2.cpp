/*      string 字符串型-14   
        stringstream 例题：需要将input.txt里的字符串们输出到一行里, 并告诉有多少个字符串      
*/
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string str;
    stringstream ss;
    int cnt = 0;

    while(cin>>str)     //输入字符串
    {
        ss << str << " " ;  // 需要用空格来传到ss
        cnt++;
    }
    
    cout << cnt << endl;

    for(int i=0;i<cnt;i++)
    {
        ss >> str;
        cout << str << " ";
    }
    cout << endl;

    // 下面这个同样可以输出我们想要的：
    cout << ss.str();
    return 0;
}