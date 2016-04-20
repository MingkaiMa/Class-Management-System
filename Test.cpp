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
	 cout<<"1.Add student grade"<<endl;
	 cout<<"2.Display student grade"<<endl;
	 cout<<"3.Find student information according to student number"<<endl;
	 cout<<"4.Delete student information according to student number"<<endl;
	 cout<<"5.Change student information according to student number"<<endl;
	 cout<<"0.Exit system"<<endl;
	 cout<<"Please input:"<<endl;
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
