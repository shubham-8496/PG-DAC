#include<iostream>
using namespace std;

class B;
class A
{
	
	int a;
	public:
		void get()
		{
			cout<<"enter number: ";
			cin>>a;
		}
		friend void show(A &,B &);
};
class B
{
	
	int b;
	public:
		void get()
		{
			cout<<"enter number: ";
			cin>>b;
		}
		friend void show(A &,B &);
};

void show( A &s,B &t)
{
	cout<<"sum is:  "<<s.a+t.b;
}
int main()
{
	A obj1;
	B obj2;
	obj1.get();
	obj2.get();
	show(obj1,obj2);
	
}
