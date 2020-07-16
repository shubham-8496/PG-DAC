#include<iostream>

using namespace std;

class box
{
	int l,b,h;
	
	public:
		void get()
		{
			cout<<"enter l,b & h";
			cin>>l>>b>>h;
		}
		int compare( box *p)
		{
			int a1;
			int a2;
			a1=l*b*h;
			a2=p->l*p->b*p->h;
			if(a1==a2)
			{
				return 0;
				
			}
			else
			{
				return 1;
			}
		}
};
int main()
{
	box b1,b2;
	b1.get();
	b2.get();
	int r=b1.compare(&b2);
	if(r==0)
	{
		cout<<"equal";
	}
	else
	{
		cout<<"not equal";
	}
	
}
