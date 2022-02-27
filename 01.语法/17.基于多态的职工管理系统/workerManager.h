#pragma once
#include<iostream>
#include"worker.h"
using namespace std;


class WorkerManager
{
public:

	//构造函数
	WorkerManager();


	//0 退出系统
	void exitSystem();

	//展示菜单
	void Show_Menu();

	//1 增加职工
	void Add_Emp();

	//保存文件
	void save();
	
	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//2 显示职工
	void Show_Emp();

	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);

	//3 删除员工
	void Del_Emp();

	//4 修改职工
	void Mod_Emp();

	//5 查找职工
	void Find_Emp();

	//6 排序职工
	void Sort_Emp();

	//7 清空文件
	void Clean_File();



	//析构函数
	~WorkerManager();



	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;//**

	//标志文件是否为空
	bool m_FileIsEmpty;

};