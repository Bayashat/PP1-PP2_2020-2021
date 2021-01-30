#include <iostream>

using namespace std;

int main(){
/*
输入时 输入 几 就有几行几列的 数字们出现
*/
int size;
    cin>>size;

int array[size][size];

int num = 10;
//上面这个数字代表程序会开始的数

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<<num++<<" ";
        }
        cout<<endl;

    }
}