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
		void show()
		{
			cout<<a;
		}
		friend demo operator + (demo &,demo &);
};

 demo operator +(demo &s ,demo &t)
{
	demo temp;
	temp.a= s.a+t.a;
	return temp;
	
}
int main()
{
	demo d1,d2,d3;
	d1.get();
	d2.get();
	d3=d1+d2;
	d3.show();
	
}
