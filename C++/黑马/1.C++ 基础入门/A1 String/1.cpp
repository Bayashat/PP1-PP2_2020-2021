//  1.  string初学
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1 = "ABC";   // s1 = ABC

    string s2("DEF");    // s2 = DEF

    s1 = s1 + "FG";       // s1 = ABCFG

    s2 = s2 + 'Q';       // s2 = DEFQ

    string s3 = s1 + s2;    // s3 = ABCFGDEFQ

    string s4 (5,'s');      // s4 = sssss


    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    return 0;
}
/*
变量 s1 在定义的同时被初始化为 ABC ，随后又连接上 FG ， 成为了 ABCFG

变量 s2 在定义的同时被初始化为"DEF",，随后又连接上 Q ， 成为了 DEFQ

变量 s3 在定义的时候直接用 s2 +s3 初始化。

变量 s4 被初始化为由 5 个's'字符组成的字符串，也就是"sssss"。
*/