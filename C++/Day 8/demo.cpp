#include<iostream>
using namespace std;

class data
{
	private:
	int l,b,h;
	
	

	void get()
	{
		cout<<"enter a L,B and H";
		cin>>l>>b>>h;
	}	

	void show()
	{
		cout<<"l= "<<l<<endl;
		cout<<"b= "<<b<<endl;
		cout<<"h= "<<h<<endl; 
	}
};

class student: public data

{
	
	private:
	string type;
		

	void set()
	{
		
		cout<<"enter a material:";
		cin>>type;
		
	}
	
	void display()
	{
		cout<<"material= "<<type;
	}
};

int main()

{
	student s1;
	s1.set();

	return 0;
}
