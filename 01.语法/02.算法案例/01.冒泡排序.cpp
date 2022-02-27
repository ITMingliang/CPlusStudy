#include <iostream>
#include<stdlib.h>
#include <string>
using namespace std;

int main1() {

	int arr[9] = { 9,8,7,6,5,4,3,2,1 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//输出排序前的顺序内容

	cout << "输出排序前的顺序内容:" << endl;
	for (int i= 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	

	for (int  i = 0; i < len -1; i++)
	{
		for (int j = 0; j < len - i -1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}

	//输出排序后的内容：
	cout << "输出排序后的顺序内容:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}