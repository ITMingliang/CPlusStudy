#include <iostream>
#include <stdlib.h>

using namespace std;

int main8() {

	//��������
	int a = 0;
	cout << "���������ͱ�����" << endl;
	cin >> a;
	//������ΪС��ʱ�����ȡ����������С��
	cout << a << endl;

	//����������
	double d = 0;
	cout << "�����븡���ͱ�����" << endl;
	cin >> d;
	cout << d << endl;

	//�ַ�������
	char ch = 0;
	cout << "�������ַ��ͱ�����" << endl;
	cin >> ch;
	cout << ch << endl;

	//�ַ���������
	string str;
	cout << "�������ַ����ͱ�����" << endl;
	cin >> str;
	cout << str << endl;

	//������������
	bool flag = true;
	cout << "�����벼���ͱ�����" << endl;
	cin >> flag;
	//����ķ�0������ļ���1
	cout << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}