#ifndef HEADER_PPOINT
#define HEADER_PPOINT

#include <string>
using namespace std;
class Student
{
public:
	string number;
	string name;
	string math,english,computer;
	Student(string nu="0",string na="0",string ma="0",string en="0",string co="0");
	void setstudent(string No,string Na,string Ma,string En,string co);
	void setmath(string ma){math=ma;}
	void setenglish(string en){english=en;}
	void setcomputer(string co){computer=co;}
	bool search(string num){ if(number==num)return true;else return false;}
	void display();
};

#endif
