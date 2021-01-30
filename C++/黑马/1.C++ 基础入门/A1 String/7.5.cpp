/*      2.僅只用ss.clear();     
*/
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    stringstream ss;
    int i1=87;
    string s1;
    
    ss<<i1;
    ss>>s1;
    
    cout<<"i1="<<i1<<endl;
    cout<<"s1="<<s1<<endl;
    
    ss.clear();
    
    string s2="877";
    int i2;
    
    ss<<s2;
    ss>>i2;

    cout<<"stringstream內部="<<ss.str()<<endl;
    cout<<"s2="<<s2<<endl;
    cout<<"i2="<<i2<<endl;

}
/*
結果:
這邊發現stringstream的內部有點奇怪呢，他還保存著之前的結果，並不算完全的初始化。
來分析一下stringstream內部在程式內運行的結果:
執行完ss>>s1時的內部狀況:87EOF

此時有了EOF之後已經不能再操作了，接著使用ss.clear();
此時stringstream內部的情況:87(沒有EOF了可以繼續操作)

執行完ss<<s2時的內部狀況:87877EOF
*/