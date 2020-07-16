#include<iostream>
using namespace std;

class demo
	{
	
		int a;
		string name;
		public:
			void get();
			void show();
			void get (int i);
			demo(int i);
	};

	void demo:: get()
	{
		cout<<"enter a number and name: ";
		cin>>a;
		cin.ignore();
		getline(cin,name);
	}
	void demo :: get (int i)
	{
		a=i;
	}
	void demo::show()
	{
		cout<<"number is: "<<a<<"  name:  "<<name<<endl;
	}
	demo::demo(int i)
	{
		cout<<"boom";
	}
int main()
{
	demo d;
	d.get();
	d.show();
	demo d1;
	d1.get (20);
	d1.show();	

	demo a[3];
	for (int i=0;i<3;i++)
	{
		a[i].get();
		
	}
	for (int i=0;i<3;i++)
	{
		
		a[i].show();
	}
	
	demo*p;
	p=new demo();
	p->get();
	p->show();
}
