#include<iostream>
using namespace std;
void swap (int &,int & );

void swap(int &i,int &j)
{
	int temp;
	temp=i;
	i=j;
	j=temp;
}

int main()
{
	int a=10;
	int b=20;
	cout<<"values before swap"<<endl<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"values after swap"<<endl<<a<<" "<<b<<endl;
}
