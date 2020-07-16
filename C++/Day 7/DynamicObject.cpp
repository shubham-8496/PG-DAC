#include<iostream>
#include<string>

using namespace std;

class empl
{
	int empid;
	string name;
	float sal;
	
	public:
		void get();
		void show();
		
	};
	
	void empl :: get()
	{
		cout<<"enter emp id,name & sal:"<<endl;
		cin>>empid>>name>>sal;
		
	}
	void empl::show()
	{
		cout<<"employee id= "<<empid<<endl;
		cout<<"employee name "<<name<<endl;
		cout<<"employee sal= "<<sal<<endl;
		
	}
	
		
int main()
{
	empl *p;
	p= new empl ();
	p->get();
	p->show();
	return 0;
}
