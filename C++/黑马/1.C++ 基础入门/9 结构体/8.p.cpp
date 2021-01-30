/*           8.8 案例-2

**案例描述：

设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
五名英雄信息如下：
        {"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
*/
#include <iostream>
using namespace std;

 // 1.设计英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序
void bubbleSort(hero arr[] , int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//打印数组
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Name: " << arr[i].name << " Sex: " << arr[i].sex << " Age: " << arr[i].age << endl;
	}
}

int main() 
{

    // 2.创建数组存放5名英雄
	struct hero arr[5] =
	{
		{"Jam",23,"boy"},
		{"Guan",22,"boy"},
		{"Zhang",20,"boy"},
		{"Zhao",21,"boy"},
		{"Diao",19,"girl"},
	};

	int len = sizeof(arr) / sizeof(hero); //获取数组元素个数

    // 3.对数组进行排序，安装年龄进行升序排序。
	bubbleSort(arr, len);

    // 4.排序后的结果打印输出
	printHeros(arr, len); 

    return 0;
}