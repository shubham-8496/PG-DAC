#include<iostream>
using namespace std;


class demo
{
	static int a;
	
	public:
		void display(int i)
		{
			a=i;
			cout<<a;
		}
};

int demo::a;
int main()

{
	demo d1;
	d1.display(5);
	return 0;
		
}
