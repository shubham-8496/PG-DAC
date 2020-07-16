

#include<iostream>

using namespace std;
class base
{
	public:
		 void show()
		{
			cout<<"in base class "<<endl;
			
		}
	};
	
	class drv:public base
	{
		
	
	public:
		
	void show()
	{
		cout<<"in derived class";
	}
};
int main()
{
	base * p;
	base b1;
	p=&b1;
	p->show();
	drv d1;
	p=&d1;
	p->show();
	return 0;
}

//#include <bits/stdc++.h> 
//using namespace std; 
//  
//class base 
//{ 
//public: 
//      void print () 
//    { cout<< "print base class" <<endl; } 
//   
//    void show () 
//    { cout<< "show base class" <<endl; } 
//}; 
//   
//class derived:public base 
//{ 
//public: 
//    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
//    { cout<< "print derived class" <<endl; } 
//   
//    void show () 
//    { cout<< "show derived class" <<endl; } 
//}; 
//  
////main function 
//int main()  
//{ 
//    derived *bptr; 
//    base d; 
//    bptr = &d; 
//       
//    //virtual function, binded at runtime (Runtime polymorphism) 
//    bptr->print();  
//       
//    // Non-virtual function, binded at compile time 
//    bptr->show();  
//  
//    return 0; 
//}  
