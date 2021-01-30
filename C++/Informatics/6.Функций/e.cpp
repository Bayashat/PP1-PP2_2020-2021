#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cmath>
using namespace std;

int prime(long n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout << "composite";
            return 0;;
        }
    }
    cout << "prime";
    return 0;
}
int main()
{
    long n;
    cin >> n;
    prime(n); 
}