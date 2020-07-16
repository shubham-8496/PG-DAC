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
		friend demo operator + (demo &);
};

 demo operator +(demo &s)
{
	demo temp;
	temp.a= ++(s.a);
	return temp;
	
}
int main()
{
	demo d1,d2;
	d1.get();
	
	d2=+d1;
	d2.show();
	
}
