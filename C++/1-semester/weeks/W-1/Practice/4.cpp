#include <iostream>
/*
做猜字游戏(2)
*/
// or = ||
// and = &&
using namespace std;
int main(){ 
int a;
    cin>>a;
if (a < 3)
    cout<<"small"<<endl;
else if(a == 5 || (a>6 && a<=10))
    cout<<"apple"<<endl;
else 
    cout<<"error"<<endl;
}