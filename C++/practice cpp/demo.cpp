#include<iostream>
using namespace std;

class demo
	{
	
		int a;
		static int b;
		string name;
		public:
			void get();
			void show();
			
	};

	void demo:: get()
	{
		cout<<"enter a number and name: ";
		cin>>a;
		cin.ignore();
		getline(cin,name);
		cout<<b+1<<endl;
		
	}

	void demo::show()
	{
		cout<<"number is: "<<a<<"  name:  "<<name<<endl;
		cout<<b+3;
	}
	
	int demo::b;


int main()
{
	demo d;

	d.get();
	d.show();
	d.get();
	
	
	

}
