#include <iostream>
/*
做猜字游戏
*/
using namespace std;
int main(){ 
int a;
    cin>>a;
if (a < 3)
    cout<<"small"<<endl;
else if(a == 5)
    cout<<"exac"<<endl;
else 
    cout<<"error"<<endl;
}