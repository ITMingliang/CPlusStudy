#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>

using namespace std;

//ѧ���ṹ��
struct Student
{
	string name;
	int score;
};

//��ʦ�ṹ��
struct Teacher
{
	string name;
	Student sArray[5];//ÿ����ʦ��5��ѧ��
};

void allocateSpace(Teacher tArray[], int len)
{
	string tName = "��ʦ";
	string sName = "ѧ��";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		//��ʦ��ֵ
		tArray[i].name = tName + nameSeed[i];


		//����ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;//����60~100�������
		}
	}
}

void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main6() {

	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>

	Teacher tArray[3]; //��ʦ����

	int len = sizeof(tArray) / sizeof(Teacher);

	allocateSpace(tArray, len); //��������

	printTeachers(tArray, len); //��ӡ����

	system("pause");

	return 0;
}