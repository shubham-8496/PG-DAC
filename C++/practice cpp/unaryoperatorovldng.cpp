#include<iostream>
using namespace std;



	class demo
	{
		int a;
	
		public:
			void get()
			{
				cout<<"enter number: ";
				cin>>a;
			}
			void show()
			{
				cout<<a<<endl;
			}
			demo operator -- ()
			{
				demo temp;
				temp.a= --a;
				return temp;
			}
	};
	int main ()
	{
		demo d1,d2;
		d1.get();
		d2= --d1;
		d2.show();
	}

