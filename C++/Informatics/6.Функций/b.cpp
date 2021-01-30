#include <iostream>
#include <cmath>

using namespace std;

double power(double a, int n)
{
    double res = 1;
    for(int i = 0;i<n;i++)
    {
        res =  res * a ;
    }
     return res;
}


int main()
{
    double a;
    int b;
    cin >> a >> b ;
    
    cout << power(a,b) ;

    return 0;
}