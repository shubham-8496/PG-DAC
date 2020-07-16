#include<iostream>
using namespace std;

class demo{
	
	int a;
	public:
		void get();
		void show() const;
};

void demo::get()
{
	cout<<"enter a number: ";
	cin>>a;
	a++;
}

void demo::show() const
 {
 cout<<a<<endl;
 

}

int main(){
	demo d1;
	d1.get();
	d1.show();
	}
