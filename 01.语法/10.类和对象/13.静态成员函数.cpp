#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Person
{

public:

	//静态成员函数特点：
	//1 程序共享一个函数
	//2 静态成员函数只能访问静态成员变量

	static void func()
	{
		cout << "func调用" << endl;
		m_F = 100;
		//m_E = 100; //错误，不可以访问非静态成员变量
	}

	static int m_F; //静态成员变量
	int m_E; //非静态成员变量
private:

	//静态成员函数也是有访问权限的
	static void func2()
	{
		cout << "func2调用" << endl;
	}
};
int Person::m_F = 10;


void test_f()
{
	//静态成员变量两种访问方式

	//1、通过对象
	Person p1;
	p1.func();
	//p1.func2();

	//2、通过类名
	Person::func();


	//Person::func2(); //私有权限访问不到
}

int main() {

	test_f();

	system("pause");

	return 0;
}