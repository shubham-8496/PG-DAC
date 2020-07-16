#include<iostream>
using namespace std;

class demo
{
	int a,b;
	
	public:
		demo(int);
		void show();
};
 demo::demo(int a){
	
	b=a;
 	
}
 
 void demo::show()
{
	cout<<b;
}

//void demo::show()
//{
//	cout<<
//}

int main()
{
	demo d1(20);
	
	d1.show();
	return 0;
	//d1.show()
}
