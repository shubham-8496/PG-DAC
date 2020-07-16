#include<iostream>

using namespace std;
static int id=100;
class employee{
	
	int age;
	string name;
	
	public:
		
		
employee()
{
	
	cout<<"enter a age,name: ";
	cin>>age>>name;
	id++;
	
}



void show()

{
	cout<<"Age:"<<age<<endl<<"Name:"<<name<<endl<<"ID:"<<id<<endl;
}

};
	
//int employee::id;

int main()
{
	employee e1;
	e1.show();
	employee e2;
	e2.show();
	employee e3;
	e3.show();
	
return  0;
	
}
		
		
		
		
		
		
