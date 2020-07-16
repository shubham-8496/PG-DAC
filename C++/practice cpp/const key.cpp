#include<iostream>
using namespace std;
class demo
{
	const int a;
	public:
		demo(int i):a(i)
		{
			//a=i;
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	demo d(10);
	d.show();


	
}
