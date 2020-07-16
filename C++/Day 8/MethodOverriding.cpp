#include<iostream>

using namespace std;

class base
{
	int a;
	public:
		
		void get()
		{
			cout<<"enter an int a:  ";
			cin>>a;
		}
		
		void show()
		{
			cout<<a<<endl;
		}
};

class drv
{
	int b;
	
	public:
		
		void set()
		{
			cout<<"enter an int b: ";
			cin>>b;
		}
		void show()
		{
			
			cout<<"oops";
			cout<<b<<endl;
		}
};


int main ()
{
	
	drv obj;
	obj.set();
	obj.show();
	base obj1;
	obj1.get();
	obj1.show();
	
	
}
