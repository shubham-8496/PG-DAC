#include<iostream>
using namespace std;



	class demo
	{
		int a;
		int b;
		public:
			void get()
			{
				cout<<"enter two number: ";
				cin>>a>>b;
			}
			void show()
			{
				cout<<a<<"   "<<b<<endl;
			}
			demo add(demo &c)
			{
				demo temp;
				temp.a= a + c.a;
				temp.b= b + c.b;
				return temp;
			}
	};
	int main ()
	{
		demo d1,d2,d3;
		d1.get();
		d2.get();
		d3=d1.add(d2);
		d3.show();
	}

