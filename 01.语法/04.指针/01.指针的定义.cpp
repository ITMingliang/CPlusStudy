#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main1() {

	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a

	//ָ�붨���﷨�� �������� * ������ ;
	int* p;

	//ָ�������ֵ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << &a << endl; //��ӡ����a�ĵ�ַ
	cout << p << endl;  //��ӡָ�����p

	//2��ָ���ʹ��
	//ͨ��*����ָ�����ָ����ڴ�
	cout << "*p = " << *p << endl;


	//3��ռ�ÿռ�
	//32λռ��4�ֽ� 64λռ��8�ֽڣ���ָ�������޹�
	cout << "ָ��ռ�õ��ڴ�ռ䣺" << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;


	//4����ָ��
	//ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	int* p1 = NULL;

	//���ʿ�ָ�뱨�� 
	//�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	//cout << *p1 << endl;

	//5��Ұָ��
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�,��Ϊ0x1100Ϊ�Ƿ����ڴ�ռ�
	int* p2 = (int*)0x1100;

	//����Ұָ�뱨�� 
	cout << *p2 << endl;


	system("pause");

	return 0;
}