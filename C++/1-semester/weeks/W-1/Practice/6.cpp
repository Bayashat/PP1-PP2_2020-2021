#include <iostream>

using namespace std;
int main(){
/*
让程序写出正偶数
*/
int num = 0;
while(num!=20)
//上面这个指的是要排列出的数不能超过20
{
    num++;
    if(num%2==0)
        cout<<num<<endl;

    if(num==100)
        break;
}
}