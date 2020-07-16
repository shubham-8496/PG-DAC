#include<iostream>
using namespace std;

class base
{
	int x;
	public:
		base(int i)
		{
			x=i;
			cout<<"i="<<i<<endl;
			cout<<"base parametrized constructor"<<endl;
		}
};


class derived: public base

{
	int y;
	public:
		derived(int j):base(j)
		{
		y=j;
		cout<<"j="<<j<<endl;
		cout<<"derived parametrized constructor"<<endl;	
		}
};

int main(){
	
	derived obj(10);
}
