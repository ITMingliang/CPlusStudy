#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Building
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay(Building* building);

public:

	//���캯��
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};


void goodGay(Building* building)
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
}


void test05()
{
	Building b;
	goodGay(&b);
}

int main5() {

	test05();

	system("pause");
	return 0;
}