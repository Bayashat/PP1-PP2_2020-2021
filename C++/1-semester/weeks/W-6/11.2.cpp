/*      string 字符串型-12    
        find语句： 在字符串中查找字符串的位置
*/        
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "testtesttest";
    string x;
    cin >> x ; 

    if(str.find(x)== string::npos)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    return 0;
}