#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    const int cost1 = 15, cost5 = 70, cost10 = 125, cost20 = 230, cost60 = 440;
    int n, k1, k5, k10, k20, k60;
    cin >> n;
    k60 = n / 60;
    n %= 60;
    k20 = n / 20;
    n %= 20;
    k10 = n / 10;
    n %= 10;
    k5 = n/5;
    k1 = n % 5;
    
    if (k1 * cost1 >= cost5)
    {
        k1 = 0;
        k5++;
    }
    if (k1 * cost1 + k5 * cost5 >= cost10)
    {
        k1 = 0;
        k5 = 0;
        k10++;
    }
    if (k1 * cost1 + k5 * cost5 + k10 * cost10 >= cost20)
    {
        k1 = 0;
        k5 = 0;
        k10 = 0;
        k20++;
    }
    if (k1 * cost1 + k5 * cost5 + k10 * cost10 + k20 * cost20 >= cost60)
    {
        k1 = 0;
        k5 = 0;
        k10 = 0;
        k20 = 0;
        k60++;
    }
    cout<<k1<<" "<<k5<<" "<<k10<<" "<<k20<<" "<<k60;
    return 0;
}