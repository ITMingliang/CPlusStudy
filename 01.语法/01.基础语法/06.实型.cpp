#include <iostream>
#include <stdlib.h>

using namespace std;


int main6() {

	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	//默认输出保留6位有效数字
	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;


	system("pause");

	return 0;

}