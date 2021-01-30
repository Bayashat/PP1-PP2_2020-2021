// 例题3 将输入的数字们以升序排列(第四种方式)
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];//init

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}