/*
In a company an employee is paid as given below:
	1) If basic salary of empoyee is less than Rs. 1500 , then HRA = 10% of basic salary and DA = 90 % of basic salary
	2) If basic salary is greater than or equal to Rs. 1500 , then HRA = Rs. 500 and DA = 98% of 	basic salary
	Accept basic salary as input and calculate HRA , DA AND Total Salary of employee. Also display name of employee. See to it that dynamically allocated memory should be made free before program ends.
*/
#include "iostream"
#include "cstring"

using namespace std;

class Employee
{
	private :
				int total_sal,basic_sal;
				int hra , da;
				string name;
	public :
				void accept_details();	
				void calculate_salary();
				void show_details();
				~Employee();		
};

	void Employee :: accept_details()
	{
		
		cout<<"Enter name of Employee : ";
		cin>>name;
		
		cout<<"Enter basic salary of Employee : ";
		cin>>basic_sal;
	}

	void Employee :: calculate_salary()
	{
		if(basic_sal < 1500)
		{
			hra = (10 * basic_sal) / 100;
			da = (90 * basic_sal) / 100;
		}
		else
		{
			hra = 500;
			da = (98 * basic_sal) / 100;
		}

		total_sal = hra +  da +  basic_sal;
	}

	
	void Employee :: show_details()
	{
		cout<<"Name of Employee : "<<name<<endl;
		cout<<"Basic Salary of Employee : "<<basic_sal<<endl;		
		cout<<"HRA of Employee : "<<hra<<endl;
		cout<<"DA of Employee : "<<da<<endl;
		cout<<"Total Salary of Employee : "<<total_sal<<endl;	
	}

	Employee :: ~Employee()
	{
		cout<<"Employee destroyed !!!"<<endl;
		
	}


int main()
{
	Employee emp;
	emp.accept_details();
	emp.calculate_salary();
	emp.show_details();	
	return 0;
}

