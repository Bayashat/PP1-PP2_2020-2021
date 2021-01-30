#include <iostream>
#include<string>
using namespace std;

bool ValidString(string s,int n)
{
    int cnt =0;
    for(int i=0;i<s.size();i++)
    {
        if(cnt>=n)
        {
            return true;
        }
        if(s[i]>='0' && s[i] <='9')
        {
            cnt++;
        }
        else 
        {
            cnt = 0;
        }
    }
    return false;
}
int main()
{
    string s;
    int n;
    cin >> s >> n;
    ValidString(s,n) ? cout << "Valid" : cout << "Not valid" ;
}