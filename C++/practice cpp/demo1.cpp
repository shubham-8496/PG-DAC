#include<iostream>
#include<string>
using namespace std;

class demo 
{
	int rollno;
	string name;
	float per;
	char grade;
	
	public:
		demo();
		//demo(int i,int j);
		void show();
		
};
	demo::demo()
{
	cout<<"enter rollno,per,grade,name"<<endl;
	cin>>rollno>>per>>grade;
	cin.ignore();
	getline(cin,name);
	
	
}




void demo::show()
{
	
	cout<<rollno<<endl<<name<<endl<<per<<endl<<grade<<endl;
} 


int main()
	{
		demo s1;
		s1.show();
		demo s2;
		s2.show();
		
	}
