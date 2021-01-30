#include <iostream>
#include<string>
using namespace std;

int isValid(int s)
{
    while(s!=0)
    {
        if(s%2 != 0)
        {
            cout << "Not valid";
            return 0;
        }
        s = s/10;
    }
    cout << "Valid";
}
int main()
{
    int s;
    cin >> s;
    isValid(s);
}
