#include<iostream>

using namespace std;

class demo{
	
	int a;
	
	public:
		
		demo();
		demo(int );
		void show();
		~demo();
};

demo::demo()
{
	a=0;
}

demo::demo(int i)
{
	a=i;
}

void demo::show()
{
	cout<<"a="<<a<<endl;
}

demo::~demo()
{
	cout<<"calling destructor"<<endl;
}
int main(){
	
	demo d1;
	d1.show();
	int user_input;
	cout<<"enter a number: ";
	cin>>user_input;
		
	demo d2(user_input);
	d2.show();
	
	}
