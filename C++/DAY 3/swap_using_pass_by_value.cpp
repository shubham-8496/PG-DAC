#include<iostream>

using namespace std;

class demo{
	int a,b;
	
	public:
		int swap(int ,int );
		void show();
};

int demo::swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;

}
void demo::show()
{
	
	cout<<p<<q;
	
}
int main(){
	demo d1;
	
	d1.swap(10,20);
	d1.show();
}

	
	
	
	
	
	
	
	
	
	

