#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
string toKnary(int n, int k,string s)
{
    if(n<k)
    {
        if(n>9)
        {
            return char('A'-10+n)+s;
        }
        else
        {
            return char(n+'0')+s;
        }  
    }
    else if(n==k || n>k)
    {
        if(n%k>9)
        {
            return toKnary(n/k,k,char(55+n%k)+s);
        }
        else
        {
            return toKnary(n/k,k,char(n%k+48)+s);
        }
    }
    
}
int main()
{
    int n,k;
    cin >> n >> k;
    string b = " ";
    cout << toKnary(n,k,b);
}