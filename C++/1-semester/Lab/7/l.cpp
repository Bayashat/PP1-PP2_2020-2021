#include <iostream>
#include<string>
#include <cmath>
using namespace std;
bool Pal(string s,int i,int x)
{
    if(i>=x) return true;
    if(s[i]!=s[x]) return false;
    if(s.size()==1) return true;
    return Pal(s,i+1,x-1);
}
int main()
{
    string s;
    cin >> s;
    int x = s.size()-1;
    Pal(s,0,x) ? cout << "Yes" : cout << "No";
}
