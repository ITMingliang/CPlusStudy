#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


int* func()
{
	int a = 10;
	return &a;
}

int main() {

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;



	//����delete�ͷŶ�������
	delete p;

	//cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���

	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷ����� delete ��� []
	delete[] arr;

	system("pause");

	return 0;
}