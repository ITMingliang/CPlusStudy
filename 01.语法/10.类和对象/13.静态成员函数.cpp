#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Person
{

public:

	//��̬��Ա�����ص㣺
	//1 ������һ������
	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

	static void func()
	{
		cout << "func����" << endl;
		m_F = 100;
		//m_E = 100; //���󣬲����Է��ʷǾ�̬��Ա����
	}

	static int m_F; //��̬��Ա����
	int m_E; //�Ǿ�̬��Ա����
private:

	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout << "func2����" << endl;
	}
};
int Person::m_F = 10;


void test_f()
{
	//��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.func();
	//p1.func2();

	//2��ͨ������
	Person::func();


	//Person::func2(); //˽��Ȩ�޷��ʲ���
}

int main() {

	test_f();

	system("pause");

	return 0;
}