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
	cout<<"Please input the student number that you want to add";
		cin>>s.number;
for(int i=0;i<stu.size();i++)
{
	if(stu[i].search(s.number))
	{	cout<<"The student is already exist";
	return;
	}
}
	cout<<"Name:";
	cin>>s.name;
	cout<<"Math grades：";
	cin>>s.math;
	cout<<"English grades:";
	cin>>s.english;
	cout<<"Computer grades：";
	cin>>s.computer;
	stu.push_back(s);
	s.display();

}
void Manage::Delete()
{
	string num;
	cout<<"Please input the student number that you want to delete";
	cin>>num;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(num))
			stu.erase(stu.begin()+j);
	}
	cout<<num<<"The student is deleted"<<endl;
	Store();

}
void Manage::Seek()
{string nu;
cout<<"Please input the student number that you want to find";
cin>>nu;
for(int j=0;j<stu.size();j++)
{
	if(stu[j].search(nu)){
		cout<<"student number"<<nu<<"name"<<endl;
		stu[j].display();
		break;
	}
}
cout<<"No student exist"<<endl;
}
void Manage::Alter(string ma,string en,string co)
{
	string nu;
	cout<<"Please input the student number that you want to change";
	cin>>nu;
	for(int j=0;j<stu.size();j++)
	{
		if(stu[j].search(nu))
		{
			cout<<"Please input the changed Math gardes,English grades and Computer grades"<<endl;
			cin>>ma>>en>>co;
			stu[j].math=ma;
			stu[j].english=en;
			stu[j].computer=co;
			cout<<"After change,the student's information is:"<<endl;
			stu[j].display();
		}
	}
}
void Manage::Store()
{
   ofstream outfile("student.txt");
   if(!outfile)
   {
      cout<<"Data file is not exist"<<endl;
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
	cout<<"Student Number"<<setw(6)<<"Name"<<setw(6)<<"Math"<<setw(6)<<"English"<<setw(6)<<"Computer"<<setw(6)<<endl;
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
