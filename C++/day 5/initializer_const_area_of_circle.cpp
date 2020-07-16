#include<iostream>
using namespace std;


class circle{
	
	int r;
	const float pie;
	float c;
	public:
		circle(int input,float i):pie(i)
{
	
	r=input;
	c=pie*r*r;
}
void show()
{


cout<<"radius=   "<<r<<endl<<" pie=  "<<pie<<"area= "<<c;

} 
};

int main(){
	circle c1(15,3.14);
	c1.show();
	
}
