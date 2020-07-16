#include<iostream>

using namespace std;

class base 
{
	int a;
	public:
		
		base()
		{
		a=30;
		}
		 void show()
		 {
		 	cout<<"a= "<<a<<endl;
		 }
};

class drv : public base

{
	int b;
	
	public:
		
		drv()
		{
			b=51;
			
		}
		void show()
		 {
		 	cout<<"b= "<<b<<endl;
		 }
};

int main()

{
	base b1;
	b1.show();
	drv d1;
	d1.show();
	
	return 0;
}
