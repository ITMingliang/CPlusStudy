#include <iostream>
#include <stdlib.h>

using namespace std;

int main3() {

	//字符
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;

	//ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符

	cout << (int)ch << endl;  //查看字符a对应的ASCII码
	ch = 97; //可以直接用ASCII给字符型变量赋值
	cout << ch << endl;


	//字符串
	char str1[] = "hello world";
	cout << str1 << endl;

	string str2 = "hello C++";
	cout << str2 << endl;


	system("pause");

	return 0;

}