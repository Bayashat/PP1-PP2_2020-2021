#include <iostream>

using namespace std;

int main(int n, char ** a)  // char **a 代表a的二维数组
{

    cout << n << endl;

    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }

    return 0;
}