#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main2() {
	int arr[5] = { 300,350,200,400,250 };

	//假设最大体重
	int max = 0;

	//数组的长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//输出五只猪的体重
	cout << "五只猪的体重为：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//比较体重
	for (int i = 0; i < len; i++)
	{
		if (arr[i]> max)
		{
			max = arr[i];
		}
	}

	cout << "五只猪的最大体重为：" << max << endl;

	system("pause");
	return 0;
}