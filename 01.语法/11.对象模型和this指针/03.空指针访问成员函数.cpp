#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

//��ָ����ʳ�Ա����
class Person {
public:

	void ShowClassName() {
		cout << "����Person��!" << endl;
	}

	void ShowPerson() {
		//�����ж�
		if (this == NULL) {
			return;
		}
		cout << mAge << endl;
	}

public:
	int mAge;
};

void test02()
{
	Person* p = NULL;
	p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
	p->ShowPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
}

int main3() {

	test02();

	system("pause");

	return 0;
}