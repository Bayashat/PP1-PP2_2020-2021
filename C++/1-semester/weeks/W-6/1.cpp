//   string 字符串型

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x = "ABC";   // x = ABC

    string y("DEF");    // y = DEF

    x = x + "FG";       // x = ABCFG

    y = y + 'Q';

    cout << x << " " << y << endl;

    return 0;
}