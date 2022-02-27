#include <iostream>
#include <stdlib.h>

using namespace std;

int main18() {


	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
//无条件跳转，在程式中不建议使用，避免发生程序混乱
FLAG:

	cout << "5" << endl;

	system("pause");

	return 0;

}