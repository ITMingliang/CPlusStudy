#include <iostream>
#include <stdlib.h>

using namespace std;

int main7() {

	//输出的值为0或者1

	bool flag = true;
	cout << flag << endl; // 1

	flag = false;
	cout << flag << endl; // 0

	cout << "size of bool = " << sizeof(bool) << endl; //1

	system("pause");
	return 0;

}