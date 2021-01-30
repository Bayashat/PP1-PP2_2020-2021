#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int a = 0,b=0;

    for(int j=0;j<n.size();j++)
    {
        if(n[j]>='a' && n[j]<='z')
            a++;
        else 
            b++;
    }
    cout << a << " " << b << endl;
    return 0;
}