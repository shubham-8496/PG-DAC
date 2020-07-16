#include<iostream>

using namespace std;

class A
{
	int a;
	public:
		void f1()
		{
			cout<<"in f1";
		}
		virtual void f2(){
			cout<<a;
		}
};

class B:public A
{
	int b;
	public:
		void f3(){
			cout<<"in f1";
		}
		void f2()
		{
			cout<<b;
		}
};

int main()
{
	B obj;
	A *ptr;
	ptr=&obj;
	ptr->f2();
	//ptr->f3();
	ptr->f1();
	return 0;
	
}
