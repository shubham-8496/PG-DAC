#include<iostream>
using namespace std;
class student
{
	int rollno;
	char grade;
	float per;
	public:
		void get(int ,char ,float);
		void show();
	
};

void student::get(int p,char q,float r)
{
cout<<"enter a number";
cin>>p>>q>>r;
}

	

void student::show()
{

	cout<<rollno<<endl<<grade<<endl<<per;
}
int main()
{
	student s1;
	s1.get();
    s1.show();
   
}

