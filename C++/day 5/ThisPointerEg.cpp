#include<iostream>

using namespace std;

class box

	{
		int l,b,h;
	
		public:
			 box ()
			{
			
				cout<<"enter l ,b & h=  "<<endl;
				cin>>l>>b>>h;
			
				
			}
			
			 box(int i)
			
			{
				l=b=h=i;
				
				
			}
			
			 box(int l,int h)
			
			{
				this->l=b=l;
				this->h=h;	
			}
			
			  box(int l,int b,int h) 
			 
			 {
			 	this->l=l;
			 	this->b=b;
			 	this->h=h;
			 }
			 
			 void show()
			 
			 {
				 cout<<l<<endl<<b<<endl<<h<<endl;
				 cout<<"address of calling object= "<<this<<endl;
			 }
			  box(box &p) 
			 
			 {
			 	this->l=p.l;
			 	this->b=p.b;
			 	this->h=p.h;
			 }
			 
	};
	
	int main ()
	{
	
	box b1;
	b1.show();
	box b2(10);
	b2.show();
	box b3(10,20);
	b3.show();
	box b4(10,20,30);
	b4.show();
	box b5(b4);
	b5.show();
	}
	
	
