#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Person {
public:
	Person() {
		cout << "�޲ι��캯��!" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "�вι��캯��!" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "�������캯��!" << endl;
		mAge = p.mAge;
	}
	//�����������ͷ��ڴ�֮ǰ����
	~Person() {
		cout << "��������!" << endl;
	}
public:
	int mAge;
};

//1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1() {

	Person man(100); //p�����Ѿ��������
	Person newman(man); //���ÿ������캯��
	Person newman2 = man; //��������

	//Person newman3;
	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
}

//2. ֵ���ݵķ�ʽ������������ֵ
//�൱��Person p1 = p;
void doWork(Person p1) {}
void test2() {
	Person p; //�޲ι��캯��
	doWork(p);
}

//3. ��ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test3()
{
	Person p = doWork2();
	cout << (int*)&p << endl;
}


int main7() {

	//test1();
	//test2();
	test3();

	system("pause");

	return 0;
}