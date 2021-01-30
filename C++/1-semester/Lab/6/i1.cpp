#include <iostream>
#include<string>
using namespace std;

string CapitalEven(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<= 'z' && s[i]>='a')
        {
            if(i%2==0)
            {   
                s[i] -= 32;
            }
        }
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << CapitalEven(s);
}
