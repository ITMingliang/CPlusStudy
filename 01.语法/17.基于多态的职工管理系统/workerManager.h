#pragma once
#include<iostream>
#include"worker.h"
using namespace std;


class WorkerManager
{
public:

	//���캯��
	WorkerManager();


	//0 �˳�ϵͳ
	void exitSystem();

	//չʾ�˵�
	void Show_Menu();

	//1 ����ְ��
	void Add_Emp();

	//�����ļ�
	void save();
	
	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//2 ��ʾְ��
	void Show_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//3 ɾ��Ա��
	void Del_Emp();

	//4 �޸�ְ��
	void Mod_Emp();

	//5 ����ְ��
	void Find_Emp();

	//6 ����ְ��
	void Sort_Emp();

	//7 ����ļ�
	void Clean_File();



	//��������
	~WorkerManager();



	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;//**

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

};