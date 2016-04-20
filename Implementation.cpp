#include"head.h"
#include"headd.h"
#include<iostream>
#include <string>
#include<vector>
#include<fstream>
#include<iomanip>
using namespace std;
void Manage::Add(Student&s)
{
	cout<<"请输入需要添加的学生学号：";
		cin>>s.number;
for(int i=0;i<stu.size();i++)
{
	if(stu[i].search(s.number))
	{	cout<<"该学号学生信息已存在";
	return;
	}
}
	cout<<"姓名:";
	cin>>s.name;
	cout<<"数学成绩：";
	cin>>s.math;
	cout<<"英语成绩:";
	cin>>s.english;
	cout<<"计算机成绩：";
	cin>>s.computer;
	stu.push_back(s);
	s.display();

}
void Manage::Delete()
{
	string num;
	cout<<"输入您需要删除的学生学号：";
	cin>>num;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(num))
			stu.erase(stu.begin()+j);
	}
	cout<<num<<"学生信息已删除"<<endl;
	Store();

}
void Manage::Seek()
{string nu;
cout<<"请输入您需要查询的学生学号：";
cin>>nu;
for(int j=0;j<stu.size();j++)
{
	if(stu[j].search(nu)){
		cout<<"找到学号为"<<nu<<"的学生，内容是："<<endl;
		stu[j].display();
		break;
	}
}
cout<<"没有您要找的学生信息！"<<endl;
}
void Manage::Alter(string ma,string en,string co)
{
	string nu;
	cout<<"请输入您需要修改信息的学生学号：";
	cin>>nu;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(nu))
		{
			cout<<"请依次输入需要修改的数学、英语、计算机成绩："<<endl;
			cin>>ma>>en>>co;
			stu[j].math=ma;
			stu[j].english=en;
			stu[j].computer=co;
			cout<<"修改后的学生信息为："<<endl;
			stu[j].display();
		}
	}
}
void Manage::Store()
{
   ofstream outfile("student.txt");
   if(!outfile)
   {
      cout<<"数据文件不存在"<<endl;
	  return;
   }
for(int i=0;i<stu.size();i++)
{
	outfile<<stu[i].number<<" "<<stu[i].name<<" "<<stu[i].math<<" "<<stu[i].english<<" "<<stu[i].computer<<endl;
  }
   outfile.close();

}
void Manage::Play()
{
	cout<<"学号"<<setw(6)<<"姓名"<<setw(6)<<"数学"<<setw(6)<<"英语"<<setw(6)<<"计算机"<<setw(6)<<endl;
     for(int i=0;i<stu.size();i++)
     {
         cout<<stu[i].number<<" "<<stu[i].name<<" "<<stu[i].math<<" "<<stu[i].english<<" "<<stu[i].computer<<endl;

     }
}

Student::Student(string nu,string na,string ma,string en,string co)
{
	number=nu;
	name=na;
	math=ma;
	english=en;
	computer=co;
}
void Student::setstudent(string No,string Na,string Ma,string En,string Co)
{
	number=No;
	name=Na;
	math=Ma;
	english=En;
	computer=Co;
}
void Student::display()
{
	cout<<number<<setw(8)<<name<<setw(6)<<math<<setw(8)
	<<english<<setw(8)<<computer<<endl;
}
