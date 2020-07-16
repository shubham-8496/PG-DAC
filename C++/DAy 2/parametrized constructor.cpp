#include<iostream>
using namespace std;

class demo{
	int a;
	
	public:
		demo(int);
		void show();
};

demo::demo(int i)
{ 
a=i;

}

void demo::show() 
{
	cout<<a;
}
int main()
{
	demo d1(10);
	d1.show();
	
	}
