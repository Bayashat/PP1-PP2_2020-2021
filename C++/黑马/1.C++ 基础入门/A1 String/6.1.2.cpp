/*      6.1.2 插入字符串---insert(pos,str)       
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "to be question";
    string str2 = "the ";
    string str3 = "or not to be";

    str.insert(6,str2);                 // to be (the ) question          // 表示在第6个位置前插上 srt2
    str.insert(6,str3,3,4);             // to be (not ) the question      // 表示在第6个位置前插上 str 3 的 从第3个位置后的4个字符
    str.insert(10,"that is cool",8);    // to be not (that is ) the question  // 表示在第10个位置前插上 “that is cool”的前8个字符
    str.insert(10,"to be ");            // to be not (to be ) that is the question   // 表示在第10个位置前插上 "to be"
    str.insert(15,1,":");               // to be not to be (:) that is the question   // 表示在第15个位置前插上":" 一遍
    
    return 0;
}