#include<iostream>
#include<string>

using namespace std;

class empl
{
	int empid;
	string name;
	float sal;
	
	public:
		void get(int ,string,float);
		//empl(int,string,float);
		void show();
		//get1(int,float);
		
	};
	
	void empl :: get(int i,string j,float k)
	{
		empid =i;
		name = j;
		sal = k;
		
		}		
		
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
	
		
int main()
{
	
	int i;
	string j;
	float k;
	cout<<"enter emp id,name & sal:"<<endl;
	cin>>i>>j>>k; 
	empl *p;
	//p= new empl ();
	//empl *p1;
	//p= new empl ();
	p = new empl();
	p->get(i,j,k);
	p->show();
	//p1->show();
	return 0;
}
