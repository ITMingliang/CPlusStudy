#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main3() {

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int len = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = len - 1;

	//输出逆置前
	cout << "逆置前的序列：" << endl;
	for (int i =0 ; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//逆置
	while (end > start)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//移动下标
		start++;
		end--;
	}

	//输出倒置后
	cout << "逆置后的序列：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;



	int arr2[2][3] =
	{
		{1},
		{4,5,6}
	};


	system("pause");
	return 0;
}