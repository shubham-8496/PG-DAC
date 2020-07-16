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
	rollno=p;
	grade=q;
	per=r;

}

	

void student::show()
{

	cout<<rollno<<endl<<grade<<endl<<per;
}
int main()
{
	student s1;
    int a,c;
	char b;
    cout<<"enter details";
    cin>>a>>b>>c;
	s1.get(a,b,c);
    s1.show();
   
}

