#include<iostream>

using namespace std;

int main15() {

	int a = 10;
	int b = 20;
	int c = 0;


	//三木运算符
	c = a > b ? a : b;//比较取最大值
	cout << "c = " << c << endl;

	//C++中三目运算符返回的是变量,可以继续赋值

	(a > b ? a : b) = 100;//最大值重新赋值100

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	//Switch
	int score = 0;
	cout << "请给电影打分：" << endl;
	cin >> score;

	//表达式类型只能是整型或者字符型
	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	system("pause");
	return 0;
}