// 例题1：在指定数组中查看有没有用户输入的数字，如果有，打印found! 如果没有，则not found
#include <iostream>
using namespace std;
int main(){

    int a[10];  //init

    for(int i = 0; i < 10; ++i)
    {
        cin >> a[i];            // 指定的数组
    }

    int x;
    cin >> x;                   //用户想找的数字

    bool found = false;

    for(int i = 0; i < 10; ++i)
    {
        if(x == a[i]){
            found = true;
            break;
        }
    }

    if(found == true){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0;
}