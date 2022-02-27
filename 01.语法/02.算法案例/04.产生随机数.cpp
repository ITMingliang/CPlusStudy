#include<iostream>
#include<stdlib.h>
#include<ctime>//引用时间库

using namespace std;


int main4() {
	
	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>

	while (1) {
	int r =	rand() % 61 + 40;//产生60~100的随机数
	cout << "正在产生的60~100的随机数：" << r << endl;
	}

	system("pause");
	return 0;
}

