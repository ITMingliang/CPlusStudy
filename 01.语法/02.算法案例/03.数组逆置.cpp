#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main3() {

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int len = sizeof(arr) / sizeof(arr[0]);
	int start = 0;
	int end = len - 1;

	//�������ǰ
	cout << "����ǰ�����У�" << endl;
	for (int i =0 ; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//����
	while (end > start)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�ƶ��±�
		start++;
		end--;
	}

	//������ú�
	cout << "���ú�����У�" << endl;
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