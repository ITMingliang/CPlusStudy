#include<iostream>
#include<string>

using namespace std;

class Person {
public:

	//�������ÿɶ���д
	void setName(string name) {
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��������
	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "���������!" << endl;
			return;
		}
		m_Age = age;
	}
	//��ȡ���� 
	int getAge() {
		return m_Age;
	}

	//��������Ϊֻд
	void setLover(string lover) {
		m_Lover = lover;
	}

private:
	string m_Name; //�ɶ���д  ����

	int m_Age; //�ɶ���д  ����

	string m_Lover; //ֻд  ����
};


int main4() {

	Person p;
	//��������
	p.setName("����");
	cout << "������ " << p.getName() << endl;

	//��������
	p.setAge(50);
	cout << "���䣺 " << p.getAge() << endl;

	//��������
	p.setLover("�Ծ�");
	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ

	system("pause");

	return 0;
}

