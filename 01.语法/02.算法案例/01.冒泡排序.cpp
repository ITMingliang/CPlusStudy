#include <iostream>
#include<stdlib.h>
#include <string>
using namespace std;

int main1() {

	int arr[9] = { 9,8,7,6,5,4,3,2,1 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	//�������ǰ��˳������

	cout << "�������ǰ��˳������:" << endl;
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

	//������������ݣ�
	cout << "���������˳������:" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}