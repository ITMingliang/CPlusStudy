#include<iostream>
#include<stdlib.h>

using namespace std;

class Person
{

public:
	//构造函数
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

};

void test()
{
	Person  p;
};

int main5() {

	test();
	cout << "调用结束" << endl;
	system("pause");

	return 0;
}