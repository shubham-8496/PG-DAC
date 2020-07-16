
#include<iostream>
using namespace std;

class box
{
protected:
	
	int l,b,h;
	

		//public:
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

class carton: public  box
{
	
	protected:
	string type;
		
	void set()
	{	
		void get();
 	}
 	
 	void display()
 	{
 		cout<<"material= "<<type;
	 }
};


int main()

{
	
	carton obj;
	obj.set();
	//obj.show();
	
return 0;
}



