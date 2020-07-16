#include<iostream>

using namespace std;

class demo

{
	int a;
	
	public:
		
		void get()
		{
		
			cout<<"enter a no.";
			cin>>a;
		}
		
		void show()
		{
			
			cout<<"no is  "<<a<<endl;
			cout<<"address of calling object="<<this<<endl;
		}
};

int main()
{
	demo d1;
	d1.get();
	d1.show();
	demo d2;
	d2.get();
	d2.show();
	
}
