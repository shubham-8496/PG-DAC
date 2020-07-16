#include<iostream>
using namespace std;

class num
{
	
protected:
	
	int a,b;
	
		public:
		void get()
		{
			cout<<"enter a & b ";
			cin>>a>>b;

		}		
		void show()
		{
		
		cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
		
		}
};

class addNum : public Num
{
	
	protected :
		int c;
		
	public:
			
		void set()
		{	
			get();
 		}	 
	 	void display()
		{	
			show();
			cout<<"sum= "<<c;
		}	
 	
		void add()
		{	
			c= a+b;
 		}
};

class diffNum: public addNum
{
 		int d;
 		
 		public:
 			void accept()
 				{
 					set();
				}
			 void diff()
			 	{
			 		d=a-b;
				}
			 void print()
				{
			 		display();
			 		cout<<"difference"<<d;
				}
			 	 
};



int main()

{
	
	diff num obj;
	obj.accept();
	obj.add();
	obj.diff();
	obj.print();


}



