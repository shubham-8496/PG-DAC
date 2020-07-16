

                                            /* program to demonstrate constructor overloading*/
#include<iostream>


using namespace std;


class demo
{
	int a;
	
	public:
		demo(int);
		demo();
		void show();
		

};
void demo::show(){
	cout<<a<<endl;
}

demo::demo()
{
	cout<<"enter a number: ";
	cin>>a;
}

demo::demo(int i)
{
	a=i;
}

int main()
{ 
	demo d1;
	demo d2(10);
	d2.show();
	d1.show();
	return 0;
	
}
