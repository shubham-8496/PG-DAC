#include<iostream>
using namespace std;
class beta;
class alpha{
	
	int a=10;
	public:
		void show(){
			
			cout<<a;
		}
		friend void compare(alpha &,beta &);
};

class beta
{
	int b=10;
	public:
		void display()
		{
			
			cout<<b;
		}
		friend void compare(alpha &,beta &);
};

void compare(alpha &obj1,beta &obj2)
{
	int alpha_a=obj1.a;
	int beta_b=obj2.b;
	
	if(alpha_a==beta_b)
	{
		cout<<"alpha & beta are equal";
		 
	}
	
	else{
		cout<<"alpha & beta are not equal";
	}
	
}

int main(){
	
	alpha obj1;
	beta obj2;
	
	compare(obj1,obj2);
	
	return 0;
	
	
}
