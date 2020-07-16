#include<iostream>
using namespace std;

class demo
{
	
	int a,b;
	
public: 
	void sum(int,char,int);
	void show();
	
 };
 
 
 
 void demo:: get(int a,char b,int c)

{
	roll =a;
	grade=b;
	per=c;
	
}


void demo::show()
{
	cout<<"roll ";
	cout<<roll<<endl;
	cout<<"grade ";
	cout<<grade<<endl;
	cout<<"per ";
	cout<<per<<endl;

	}

int main()
	{
	demo d1;
	int a;
	char b;
	float c;
	cout<<"enter the roll ,grade,per ";
	cin>>a>>b>>c;
	
	d1.get(a,b,c);
	d1.show();
	}

