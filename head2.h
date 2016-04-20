#ifndef HEADER_POINT
#define HEADER_POINT
#include<vector>
using namespace std;
class Manage
{
    protected:
	vector <Student> stu;
	public:
	Manage(){;}
	void Add(Student &s);
	void Delete();
	void Seek();
	void Alter(string ma,string en,string co);
	void Store();
	void Play();
};

#endif
