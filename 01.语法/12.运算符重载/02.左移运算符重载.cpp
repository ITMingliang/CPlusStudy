#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Person {
	//������������������Ԫ����ʵ������Զ�����������
	friend ostream& operator<<(ostream& out, Person& p);

public:

	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ��
ostream& operator<<(ostream& out, Person& p) {
	out << "a:" << p.m_A << " b:" << p.m_B << endl;
	return out;
}

void test2() {

	Person p1(10, 20);

	cout << p1 << "hello world" << endl; //��ʽ���
}

int main2() {

	test2();

	system("pause");

	return 0;
}