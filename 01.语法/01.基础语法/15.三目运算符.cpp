#include<iostream>

using namespace std;

int main15() {

	int a = 10;
	int b = 20;
	int c = 0;


	//��ľ�����
	c = a > b ? a : b;//�Ƚ�ȡ���ֵ
	cout << "c = " << c << endl;

	//C++����Ŀ��������ص��Ǳ���,���Լ�����ֵ

	(a > b ? a : b) = 100;//���ֵ���¸�ֵ100

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	//Switch
	int score = 0;
	cout << "�����Ӱ��֣�" << endl;
	cin >> score;

	//���ʽ����ֻ�������ͻ����ַ���
	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}