#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double x = sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%10.10f",x);

    return 0;
}