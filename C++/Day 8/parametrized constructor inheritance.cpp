#include<iostream>

using namespace std;

class base
{
	
 protected:
 	int a,b;
 	
 	base(int i,int j){
 		
 		a=i;
 		b=j;
	 }
	 
	 void show()
	 {
	 	cout<<a<<" "<<b<<endl;
	 }
};

class drv:public base
{
	public:
	int c,d;
	drv(int i,int j):base(i,j)
	{
		
		c=a+b;
		d=a-b;
	}
	
	void show()
	{ 
		base::show();
		cout<<"sum="<<c<<endl;
		cout<<"diff="<<d;
	}
};


int main()
{
	cout<<"enter a number:";
	int input1,input2;
	cin>>input1>>input2;
	drv obj(input1,input2);
	
	obj.show();
}
