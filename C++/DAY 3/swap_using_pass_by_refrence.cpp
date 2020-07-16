#include<iostream>

using namespace std;


class demo{
	
int a,b;

	public:	
		void swap(int & ,int &);
		void show();
};

void demo::swap(int &p,int &q){
	int temp;

	temp=p;
	p=q;
	q=temp;
	cout<<p<<" "<<q;
}

void demo::show()
{
	

}

int main(){
	
	demo d1;
	int a,b;
	cout<<"enter a number: ";
	cin>>a>>b;
	int &refA=a;
	int &refB=b;
	d1.swap(refA, refB);
	d1.show();
}
