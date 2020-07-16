

#include<iostream>
using namespace std;

class box
{
private:
	
	int l;
	

		public:
		void get(int i)
		{
			l=i;

		}		
		void show()
	{
		
		cout<<"l= "<<l<<endl;
	 
	}
};

class carton: private  box
{
	
};


int main()

{
	
	carton obj;
	obj.get(100);
	

return 0;
}



