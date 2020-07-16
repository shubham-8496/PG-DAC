#include<iostream>
using namespace std;


 class demo 
 
{
	int a,b;
	public:
		 void show();
		 demo();
		 ~demo();
	
};
		demo::demo()
		{
			cout<<"enter the number"<<endl;
			cin>>a>>b;
			cout<<endl;
		}
		
		 void demo :: show()
		{
			cout<<a<<endl<<b<<endl;
		}
		
		demo:: ~demo()
		{
			cout<<endl<<"calling destructor1";
		}
		
int main()
{
		demo d1;
		d1.show();
		demo d2;
		d2.show();
		
		return 0;
	}


