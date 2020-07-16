#include<iostream>

using namespace std;

class employee{
	
	int age;
	string name;
	int ID;
	static int count;
	public:
		
		
employee()
{
	
	cout<<"enter a age,name,and ID: ";
	cin>>age>>name>>ID;
	
	count++;
}



void show()
{
	cout<<age<<endl<<name<<endl<<ID<<endl;
}



~employee()
{
	--count;	
}


static void employeecounter()
	{
		cout<<"total employee=  "<<count<<endl;
			
	}
	
	};
	
int employee::count;
	
int main()
{
	employee e1;
	e1.show();
	employee e2;
	e2.show();
	
	employee::employeecounter();
	{
		employee e4;
		//employee e5;
		e4.employeecounter();
	}
	
	e2.employeecounter();
	
	return  0;
	
}
		
		
		
		
		
		
