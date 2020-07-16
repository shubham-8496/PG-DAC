#include<iostream>

using namespace std;


class student

{
	int roll;
	static int count;
	public:
	
	
	
		student (int i )
			{
				roll=i;
				count++;
			
			}
		
		
		
		void show()
			{
				cout<<"roll=  "<<roll<<endl;
			
			}
		
		
		static void studentcounter()
			{
				cout<<"total students= "<<count<<endl;
			}
		
		
		~student()
			{
				--count;
				
			}
				
		

		
};
int student::count;

int main()
{

	student s1 (1);
	student s2(2);
	student s3(3);
	s1.show();
	s2.show();
	s3.show();
	
		student::studentcounter();
	
	{
		student s4(4);
			 //s4.show();
		//student s5(5);
	//	student s6(10);
		s4.studentcounter();
			//s4.studentcounter();
	}
	
s3.studentcounter();
	return 0;

}


