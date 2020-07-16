#include<iostream>

using namespace std;

class base
{
	
	public:
		base()
		{
			cout<<"calling base constructor"<<endl;
		}
		
		~base()
		{
			cout<<"calling base destructor"<<endl;
		}
};

class drv : private base

{
	public:
		
	drv()
	{
		cout<<"calling drive constructor"<<endl;
	}
	
	~drv()
	{
		cout<<"calling derive destructor"<<endl;
	}
};

int main()
{
	
	
	drv obj;

}



