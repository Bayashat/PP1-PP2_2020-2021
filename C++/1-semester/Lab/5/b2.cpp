#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    for(int j=0;j<n.size();j++)
    {
        n[j] = toupper(n[j]);   // tolower(s[j]) 是小化
    }
    cout << n;
    return 0;
}