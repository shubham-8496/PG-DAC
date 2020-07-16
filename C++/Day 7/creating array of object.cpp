#include<iostream>
#include<string>

using namespace std;

class empl
{
	int empid;
	string name;
	float sal;
	//static int count;
	public:
		void get();
		//empl(int,string,float);
		void show();
		//get1(int,float);
		//empl();
	};	
	

		void empl :: get()	{
		cout<<"enter id,name & sal:"<<endl;
		cin>>empid>>name>>sal; 
	}
//		
		
//	 empl :: empl (int i,string j,float k)
//	{
//	 	empid = i;
//	 	name = j;
//	 	sal = k;
//		
//	}
	void empl::show() 
	{
		cout<<"employee id= "<<empid<<endl;
		cout<<"employee name= "<<name<<endl;
		cout<<"employee sal= "<<sal<<endl;
		
	}
	
//	int empl::empid; 
int main()
{
	
//	int i;
//	string j;
//	float k;
//	cout<<"enter emp id,name & sal:"<<endl;
//	cin>>i>>j>>k;
 
	empl *p;
	int size=2;
//	cout<<"enter a size:";
//	cin>>size;
	p= new empl[size];
	
	for(int i=0;i<size;i++)
	{
		(p+i)->get();
	}
	for(int i=0;i<size;i++)
	{
		(p+i)->show();
	}
	
	
	
	//empl *p1;
	//p= new empl ();
	//p = new empl(i,j,k);
	//p->get();
//	p->show();
	//p1->show();
	return 0;
}
