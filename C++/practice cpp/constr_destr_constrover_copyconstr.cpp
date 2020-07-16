#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		box()
		{
			cout<<"enter l,b,h"<<endl;
			cin>>l>>b>>h;
		}
		box(int i)
		{
			
			
			l=i;
			b=i;
			h=i;
		}
		box(int i,int j)
		{
			l=b=i;
			h=j;
		}
		box(int i,int j,int k)
		{
			l=i;
			b=j;
			h=k;
		}
		box(box &p)
		{
		
		l=p.l;
		b=p.b;
		h=p.h;
		}
		void show()
		{
			cout<<l<<" "<<b<<" "<<h<<endl;
			cout<<"address of object  "<<this<<endl;
		}
		~box()
		{
			cout<<"destructor"<<endl;
		}
};

int main()
{
box b;
b.show();
box b1(10);
b1.show();
box b2(10,20); 
b2.show();
box b3(10,20,30);
b3.show();
box b4(b3);
b4.show();
}



