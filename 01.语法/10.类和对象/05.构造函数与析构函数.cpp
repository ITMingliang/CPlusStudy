#include<iostream>
#include<stdlib.h>

using namespace std;

class Person
{

public:
	//���캯��
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

};

void test()
{
	Person  p;
};

int main5() {

	test();
	cout << "���ý���" << endl;
	system("pause");

	return 0;
}