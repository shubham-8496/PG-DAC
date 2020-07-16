#include<iostream>

using namespace std;

class num{
	protected:
		int a,b;
		
		num(int i,int j)
		{
			a=i;
			b=j;
		}
		
		void show(){
			cout<<"a="<<a<<endl;
			cout<<"b="<<b;
			
		}
};
class addnum:public num
{
	int c;
	public:
	addnum(int i,int j):num(i,j)
	{
		c=a+b;
	}
	
	void show()
	{
		num::show();
		cout<<endl<<"sum="<<c<<endl;
			}
};


class diffnum:public num
{
	int d;
	public:
	diffnum(int i,int j):num(i,j)
	{
		d=a-b;

	}
	
	void show()
	{
		cout<<"diff="<<d<<endl;
			
	}
};


int main(){
	addnum obj(10,20);
	diffnum obj1(10,20);
	obj.show();
	obj1.show();
	
}
