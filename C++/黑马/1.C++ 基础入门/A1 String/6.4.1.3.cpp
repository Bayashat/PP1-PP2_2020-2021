/*       6.4.1.3 字符串查找 - find函数--.find(str,pos)       

          例题：
在给定的字符串里找指定的字母出现了几次， 比如  he 在 hehelohe   中出现了三次
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text , pattern;
    cin >> text >> pattern;

    int cnt = 0;
    size_t pos =0;
    
    for(int i=0;i<text.size(); i++)
    {
        pos = text.find(pattern,pos);       
        if(pos != string :: npos)
        {
            cnt++;
            pos++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}