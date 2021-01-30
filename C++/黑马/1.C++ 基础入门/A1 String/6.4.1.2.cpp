/*       6.4.1.1 字符串查找 - find函数--.find(str,pos)
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