#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    for(int j=0;j<n.size();j++)
    {
        if(n[j]>='a' && n[j]<='z')
            n[j] = n[j]-32;
    }
    for(int j=0;j<n.size();j++)
    {
        cout << n[j];
    }
    return 0;
}