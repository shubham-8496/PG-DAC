#include<iostream>
 using namespace std;
 
 class demo
 {
 	
    int b=10;
    const int *p=&b;
 	
 	public:
 		void get()
 		{
 		//	cout<<"enter a number";
 			//cin>>b;
		 }
		 void show() 
		 {
		 	
		cout<<b<<endl;
		
		
		 }
 };
 int main()
 {
 	demo d1;
 	d1.get();
 	d1.show();
 	//d1.show();
 	return 0;
 }
