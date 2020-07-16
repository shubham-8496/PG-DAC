#include<iostream>

using namespace std;

void display();
int main()
{
//	cout<<"call display 1 ";
	display();
//	cout<<"call display 2 ";
	display();
}

void display(){
	
    static int a;
	cout<<a<<endl;
	a++;
	cout<<a<<endl;
}

