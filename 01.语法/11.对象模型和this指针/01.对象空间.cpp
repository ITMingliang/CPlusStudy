#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Person {
public:
	Person() {
		mA = 0;
	}
	//�Ǿ�̬��Ա����ռ����ռ�
	int mA;
	//��̬��Ա������ռ����ռ�
	static int mB;
	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	void func() {
		cout << "mA:" << this->mA << endl;
	}
	//��̬��Ա����Ҳ��ռ����ռ�
	static void sfunc() {

	}
};

int main1() {

	cout << sizeof(Person) << endl;//4 ֻ��	int mA; ռ�ö���ռ� 

	system("pause");

	return 0;
}
