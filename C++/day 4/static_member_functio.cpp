#include<iostream>
using namespace std;


class demo
{
	static int a;
	//int b;
	
	
	public:
		 static void showa()
		{
			cout<<"enter a number:";
			cin>>a;
				//cout<<++a<<endl;
				cout<<a++;
			
			
		}
		void showb()
		{
			cout<<a<<endl;
		
				cout<<a++<<endl;
				cout<<a;
		;
		}
};

int demo::a;

int main()
{
	demo d1;
	demo::showa();
	d1.showb();
	return 0;
}
