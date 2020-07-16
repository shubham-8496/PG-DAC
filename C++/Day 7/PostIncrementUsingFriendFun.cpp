#include<iostream>

using namespace std;

class counter 
{	
	int a;
	
	public:
		counter();
		counter (int);
		friend counter operator++(counter &);
		void show();
	
};
counter::counter()
{	
	a=0;
	
}

counter ::counter(int input)
{
		a=input;
		
}

 counter operator++(counter&p)
 {
 	counter temp;
 	temp=++p.a;
 	return temp;
 }
 
void counter::  show()
 {
 	cout<<"a= "<<a;
 	
 }
 
 int main()
 {
 	counter c1(10);
 	counter c2;
 	c2=++c1;
 	c2.show();
 	return 0;

 }
