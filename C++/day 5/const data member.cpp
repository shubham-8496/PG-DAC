#include<iostream>
using namespace std;

class demo 
{
	int a;
	const int b=2020;
	
	public:
		void get();
		void show();
		
};

void demo::get() 
{
	cout<<"enter the no";
	cin>>a;
}

void demo::show()
{
	cout<<"a= "<<a<<"b= "<<b<<endl;
}

int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
