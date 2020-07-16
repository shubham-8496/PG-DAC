#include<iostream>
using namespace std;


class demo
{
	
	int a;
	public:
		void get()
		{
			cout<<"enter number: ";
			cin>>a;
		}
		friend void show(demo &);
};

void show(demo &s)
{
	cout<<"number is:  "<<s.a;
}
int main()
{
	demo d;
	d.get();
	show(d);
	
}
