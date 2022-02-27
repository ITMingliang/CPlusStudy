#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main1() {

	//1、指针的定义
	int a = 10; //定义整型变量a

	//指针定义语法： 数据类型 * 变量名 ;
	int* p;

	//指针变量赋值
	p = &a; //指针指向变量a的地址
	cout << &a << endl; //打印数据a的地址
	cout << p << endl;  //打印指针变量p

	//2、指针的使用
	//通过*操作指针变量指向的内存
	cout << "*p = " << *p << endl;


	//3、占用空间
	//32位占用4字节 64位占用8字节，与指针类型无关
	cout << "指针占用的内存空间：" << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;


	//4、空指针
	//指针变量p指向内存地址编号为0的空间
	int* p1 = NULL;

	//访问空指针报错 
	//内存编号0 ~255为系统占用内存，不允许用户访问
	//cout << *p1 << endl;

	//5、野指针
	//指针变量p指向内存地址编号为0x1100的空间,因为0x1100为非法的内存空间
	int* p2 = (int*)0x1100;

	//访问野指针报错 
	cout << *p2 << endl;


	system("pause");

	return 0;
}