#include <iostream>
#include<string>
using namespace std;

bool Valid(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2!=0) return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    Valid(s) ? cout << "Valid" : cout << "Not valid";

}