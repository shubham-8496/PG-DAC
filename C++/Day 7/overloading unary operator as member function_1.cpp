#include<iostream>

using namespace std;

class counter
{
	
	int a;
	
	public:
		counter();
		counter(int);
		counter operator++();
		void show();
};

counter::counter()
{
	
	a=0;
}

counter::counter(int input)
{
	a=input;
}
 counter counter::operator++(  )
{
	counter temp;
	temp = ++a;
	return temp;
}

void counter::show()
{
	cout<<"a= "<<a;
}

int main(){
	
	counter c1(10);
	++c1;
	c1.show();
	//c2.show();	
}






