// 可以用这个方式读取 input.txt 的文件
#include <iostream>
using namespace std;

int main(){

    int a[10001];
    int i = 0;
    int x;

    while(cin >> x){
        a[i] = x;
        i++;
    }

    for(int j = 0;j < i; ++j){
        cout << a[j] << " ";
    }
   return 0;
}