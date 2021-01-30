/*                   stringstream 语句（2）
●分割字串的示例:
这边我们來一个在网路上看到的简单例題來说明怎么分割字串。
题目内容:输入第一行数字N代表接下來有N行资料，接着每行有不定个数的整数(最多20个，每行最大200个字元)，请把每行的总和印出來。
输入：
4
1 1 2 3 5 8 13
1 1 5
11 557 996 333
2 4 6
輸出
33
7
1897
12
*/
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    stringstream s1;
    int N;//代表有几行
    int i1;//用來存放string转int的资料
    while(cin>>N)
    {
      cin.ignore();
      string line;//读入每行的資料
      for(int i=0;i<N;i++)
      {
         getline(cin,line);//读入每行的资料
         int sum=0;//計算总和
         s1.clear();//清除缓存
         s1<<line;
         //也可以使用s1.str(line);
         //还可以写成line=s1.str();
         while(true)
         {
           s1>>i1;
           if(s1.fail()) break;//确认stringstream有正常流出，沒有代表空了
           sum+=i1;//把每个转换成int的数字都丟入sum累加
         }
         cout<<sum<<endl;
      }
    }
}
