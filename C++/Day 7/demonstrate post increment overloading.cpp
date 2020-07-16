#include<iostream>

using namespace std;

class counter{
	
	int a;
	
	public:
		counter();
		counter operator++(int);
		counter(int);
		void show();
		
		
};

counter::counter(){
	
	a=0;
}

counter::counter(int input )
{
	a=input;
}

counter counter::operator++(int)
{
	
	counter temp;
	temp=a++;
	return temp;
	
}


void counter::show(){
	
	cout<<"a="<<a<<endl;
}



int main(){
	
	
	counter c1(12),c2;
    c2=c1++;
	c1.show();
	c2.show();
;	 
}
