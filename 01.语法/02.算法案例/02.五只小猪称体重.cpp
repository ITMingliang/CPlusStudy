#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main2() {
	int arr[5] = { 300,350,200,400,250 };

	//�����������
	int max = 0;

	//����ĳ���
	int len = sizeof(arr) / sizeof(arr[0]);

	//�����ֻ�������
	cout << "��ֻ�������Ϊ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//�Ƚ�����
	for (int i = 0; i < len; i++)
	{
		if (arr[i]> max)
		{
			max = arr[i];
		}
	}

	cout << "��ֻ����������Ϊ��" << max << endl;

	system("pause");
	return 0;
}