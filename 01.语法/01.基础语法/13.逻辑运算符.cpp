#include <iostream>
#include <stdlib.h>

using namespace std;


int main13() {

	int a = 10;
	int b = 10;

	//非

	//非0即1，非1即0
	cout << !a << endl; // 0

	cout << !!a << endl; // 1

	
	//与
	//同真为真，其余为假
	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;

	cout << (a && b) << endl;// 0


	 a = 10;
	 b = 10;
	//或
	//同假为假，其余为真
	cout << (a || b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a || b) << endl;// 1 

	a = 0;
	b = 0;

	cout << (a || b) << endl;// 0

	system("pause");

	return 0;

}