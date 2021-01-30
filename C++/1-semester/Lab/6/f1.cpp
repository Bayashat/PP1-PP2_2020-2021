#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

void inputArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}

void printArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}

bool validstring(string s, int n)
{
    int cnt =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            cnt++;
        }
    }
    return (cnt>=n ? true : false);
}

int main()
{
    
    string s;
    int n;
    cin >> s >> n;
    validstring(s,n) ? cout << "YES" : cout << "NO";

    return 0;
}
