#include<iostream>

using namespace std;

class student

{ 

	int roll;
	char grade;
	int per;
	string name;
	public:
	
	void get()
	{
		cout<<"enter roll,grade & per:";
		cin>>roll>>grade>>per;
		cin.ignore();
		getline(cin,name);
		
	} 
	friend void show(student &);
};
	void show(student &s)
	{
		cout<<s.roll<<endl<<s.grade<<endl<<s.per<<endl<<s.name;
	}


int main()

{
	student d1;
	d1.get();
	show(d1);
	return 0;
}

