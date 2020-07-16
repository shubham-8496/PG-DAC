#include<iostream>
using namespace std;

class box
{
  public :
		int l,b,h;
	
	

		void get()
		{
				
			cout<<"enter L & B and H ";
			cin>>l>>b>>h;
		}		
		void show()
	{
		
		cout<<"l= "<<l<<endl;
		cout<<"b= "<<b<<endl;
		cout<<"h= "<<h<<endl; 
	}
};

class carton: public box
{
	string type;
	public:
		void demo()
	{	
		get();
 	}
 		void demo1()
	{	
		show();
 	}
	
 	void set()
	{	
		cout<<"enter material name:";
		cin>>type;
 	}
 	void display()
 	{
 		cout<<"material= "<<type;
	 }
};


int main()

{
	
	carton obj;
	//obj.demo();
	obj.get();
	obj.demo1();
	obj.display();

return 0;
}

