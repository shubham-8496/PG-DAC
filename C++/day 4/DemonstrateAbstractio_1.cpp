#include<iostream>

using namespace std;

class demo
{
	int a,b,c;
	
	public:
		void show1();
		void show2();
		demo();

		
};

void demo:: show1()
{
	//cout<<"enterr an int";
	//cin>>a;
	cout<<a<<endl;
}

void demo::show2()
{
	//cout<<"enterr an int";
	//cin>>b;
	cout<<b<<endl;
	
}
demo::demo()
{
	cout<<"enter an int: ";
	cin>>a>>b;
	
}

int main()
{
	demo d1;
	d1.show1();
	//demo d2;
	d1.show2();
	
}
