#include <iostream>
#include <stdlib.h>

using namespace std;


int main13() {

	int a = 10;
	int b = 10;

	//��

	//��0��1����1��0
	cout << !a << endl; // 0

	cout << !!a << endl; // 1

	
	//��
	//ͬ��Ϊ�棬����Ϊ��
	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;

	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;

	cout << (a && b) << endl;// 0


	 a = 10;
	 b = 10;
	//��
	//ͬ��Ϊ�٣�����Ϊ��
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