#include<iostream>
using namespace std;
class cal
{
	int a,b,sum1;
	public:
		int sum(int,int);
		void show();
		
};


int cal::sum(int i,int j)
{
	
	sum1=i+j;
	
}
void cal::show()
{
cout<<sum1;
}
int main()
{
	cal c1;
	c1.sum(10,20);
	c1.show();	
	return 0;
}
