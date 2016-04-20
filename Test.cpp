#include"head.h"
#include"headd.h"
#include"shixian.cpp"
#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include"windows.h"

using namespace std;
int main()
{
   Student s;
   Manage m;
   char way;
   string ma,en,co;
   while(1)
   {
     system("cls");
	 cout<<"1.添加学生成绩"<<endl;
	 cout<<"2.显示学生成绩"<<endl;
	 cout<<"3.根据学号查询学生信息"<<endl;
	 cout<<"4.根据学号删除学生信息"<<endl;
	 cout<<"5.根据学号修改学生成绩"<<endl;
	 cout<<"0.退出系统"<<endl;
	 cout<<"请输入："<<endl;
     cin>>way;
	  switch(way)
	  {
     	case'1':m.Add(s);system("pause");break;
        case'2':m.Play();system("pause");break;
        case'3':m.Seek();system("pause");break;
        case'4':m.Delete();system("pause");break;
        case'5':m.Alter(ma,en,co);system("pause");break;
		case'0':m.Store();return 0;system("pause");break;
        default:continue;
	  }
 }
}
