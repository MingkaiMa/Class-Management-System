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
	cout<<"��������Ҫ��ӵ�ѧ��ѧ�ţ�";
		cin>>s.number;
for(int i=0;i<stu.size();i++)
{
	if(stu[i].search(s.number))
	{	cout<<"��ѧ��ѧ����Ϣ�Ѵ���";
	return;
	}
}
	cout<<"����:";
	cin>>s.name;
	cout<<"��ѧ�ɼ���";
	cin>>s.math;
	cout<<"Ӣ��ɼ�:";
	cin>>s.english;
	cout<<"������ɼ���";
	cin>>s.computer;
	stu.push_back(s);
	s.display();

}
void Manage::Delete()
{
	string num;
	cout<<"��������Ҫɾ����ѧ��ѧ�ţ�";
	cin>>num;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(num))
			stu.erase(stu.begin()+j);
	}
	cout<<num<<"ѧ����Ϣ��ɾ��"<<endl;
	Store();

}
void Manage::Seek()
{string nu;
cout<<"����������Ҫ��ѯ��ѧ��ѧ�ţ�";
cin>>nu;
for(int j=0;j<stu.size();j++)
{
	if(stu[j].search(nu)){
		cout<<"�ҵ�ѧ��Ϊ"<<nu<<"��ѧ���������ǣ�"<<endl;
		stu[j].display();
		break;
	}
}
cout<<"û����Ҫ�ҵ�ѧ����Ϣ��"<<endl;
}
void Manage::Alter(string ma,string en,string co)
{
	string nu;
	cout<<"����������Ҫ�޸���Ϣ��ѧ��ѧ�ţ�";
	cin>>nu;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(nu))
		{
			cout<<"������������Ҫ�޸ĵ���ѧ��Ӣ�������ɼ���"<<endl;
			cin>>ma>>en>>co;
			stu[j].math=ma;
			stu[j].english=en;
			stu[j].computer=co;
			cout<<"�޸ĺ��ѧ����ϢΪ��"<<endl;
			stu[j].display();
		}
	}
}
void Manage::Store()
{
   ofstream outfile("student.txt");
   if(!outfile)
   {
      cout<<"�����ļ�������"<<endl;
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
	cout<<"ѧ��"<<setw(6)<<"����"<<setw(6)<<"��ѧ"<<setw(6)<<"Ӣ��"<<setw(6)<<"�����"<<setw(6)<<endl;
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
