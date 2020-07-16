




#include<iostream>
#include<string>

using namespace std;


class student
	{
		int roll;
		char grade;
		int per;
		string name;
		
	public:
		void get();
		void show();
		
	
	};
	
	void student::get()
	
	{
		cout<<"enter roll,grade,per & grade";
		cin>>roll>>grade>>per;
		cin.ignore();
		getline(cin,name);
			
	}
	
	void student::show()
	{
		cout<<roll<<endl<<grade<<endl<<per<<endl<<name;;
	
	}
	
	int main()
	{
		student s1;
		s1.get();
		s1.show();
		return 0;
				
	}
	
	
