#include <iostream>
/*
此游戏检测输入的数字是否是 从头读还是从后读
*/
using namespace std;
int main(){ 

string word;
    cin>>word;

    bool check = true;

for (int i = 0; i < word.size(); i++)
    if(word[i] != word[word.size()-1-i])
        check = false;
        
if ( check == true)
    cout<<"GOOOOOD"<<endl;
else
    cout<<"BAAAAAD"<<endl;
}