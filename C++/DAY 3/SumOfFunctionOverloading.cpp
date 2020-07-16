#include<iostream>


using namespace std;

class cal
	{
		int a,b;
		
		public:
			int sum ( int, int);
			int sum (int, int, int);
			
	};
	
	int cal::sum(int i,int j)
			{
				int res1= i+j;
				cout<<res1<<endl;
			}
	int cal::sum(int i, int j, int k)
			{
				int	res2= i+j+k;
				cout<<res2;	
			} 			
	
	int main()
	{
		cal c1;
		int a,b;
		cout<<"enter an integer";
		cin>>a>>b;
		c1.sum(a,b);
		//c1.sum(10,20,30);
		return 0;
			
	}
