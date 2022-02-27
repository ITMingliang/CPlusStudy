#include <iostream>
#include <stdlib.h>

using namespace std;

int main8() {

	//整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	//当输入为小数时，会截取整数，丢弃小数
	cout << a << endl;

	//浮点型输入
	double d = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> d;
	cout << d << endl;

	//字符型输入
	char ch = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> ch;
	cout << ch << endl;

	//字符串型输入
	string str;
	cout << "请输入字符串型变量：" << endl;
	cin >> str;
	cout << str << endl;

	//布尔类型输入
	bool flag = true;
	cout << "请输入布尔型变量：" << endl;
	cin >> flag;
	//输入的非0，输出的即是1
	cout << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}