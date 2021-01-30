#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    int a1 = a%b;
    int b1 = b%a;
    cout << a1*b1+1 ; 
}
