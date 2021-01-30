/*      1.僅只用s1.str("");   未使用s1.clear();
*/
#include <sstream>
#include <iostream>
using namespace std;
int main3()
{
    stringstream ss;
    int i1=77777;
    string s1;
    ss<<i1;
    ss>>s1;
    
    cout<<"i1 = "<<i1<<endl;
    cout<<"s1 = "<<s1<<endl;

    //僅用ss.str("");初始化
    ss.str("");
    //////////////////////
    string s2="888888";
    int i2=0;
    ss<<s2;
    ss>>i2;
    
    cout<<"str type = "<<ss.str()<<endl;//這邊理論上會藉由ss<<s2寫入stringstream
    cout<<"int type = "<<i2<<endl;//理論上會藉由ss>>i2;寫到i2內部

}
/*
結果:
有發現了嗎?我們初始化並沒有成功，s2並沒有成功的放入ss，而且ss也沒有成功的傳到i2內。
原因是出在當執行到ss>>s1這行時，我們的stringstream已經讀到EOF了。
在stringstream的情況大概是這樣的
執行完ss>>s1時的情況:"77777"EOF
當我們使用ss.str("")時:""EOF
對，他並不會把EOF的地方清空，會繼續保留，再次使用的時候就會發生錯誤了。
*/
