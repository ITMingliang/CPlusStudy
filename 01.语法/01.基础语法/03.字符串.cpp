#include <iostream>
#include <stdlib.h>

using namespace std;

int main3() {

	//�ַ�
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;

	//ch = "abcde"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�

	cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
	ch = 97; //����ֱ����ASCII���ַ��ͱ�����ֵ
	cout << ch << endl;


	//�ַ���
	char str1[] = "hello world";
	cout << str1 << endl;

	string str2 = "hello C++";
	cout << str2 << endl;


	system("pause");

	return 0;

}