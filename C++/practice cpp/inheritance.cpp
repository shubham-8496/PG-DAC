#include<iostream>
using namespace std;

class box
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"enter value"<<endl;
			cin>>l>>b>>h;
			
		}
		void show()
		{
			cout<<l<<b<<h<<endl;
		}
		
	
};

class carton:private box
{
	string name;
	public:
		void set()
		{
			cout<<"material name"<<endl;
			cin>>name;
		}
		void display()
		{
			cout<<name<<endl;
		}
};
int main()
{
	carton o;
	o.get();
	o.set();
	o.show();
	o.display();
}
