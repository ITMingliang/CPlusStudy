#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main1() {

	int a = 10;
	int& b = a;
	// int& c; //�������ñ����ʼ��
	int& c = a; //һ����ʼ���󣬾Ͳ����Ը���
	c = b; //���Ǹ�ֵ���������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}