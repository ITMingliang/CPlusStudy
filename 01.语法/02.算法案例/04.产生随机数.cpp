#include<iostream>
#include<stdlib.h>
#include<ctime>//����ʱ���

using namespace std;


int main4() {
	
	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>

	while (1) {
	int r =	rand() % 61 + 40;//����60~100�������
	cout << "���ڲ�����60~100���������" << r << endl;
	}

	system("pause");
	return 0;
}

