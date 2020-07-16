#include<iostream>

using namespace std;


class emp{
	
	int id;
	string name;
	float sal;
	public:
		void get();
		void show();
		
	emp();
	~emp();
	
};


void emp::get(){
	
	cout<<"enter id,name,sal: ";
	cin>>id>>name>>sal;
}

void emp::show(){
	
	cout<<id<<endl;
	cout<<name<<endl;
	cout<<sal<<endl;
}
emp::emp(){
	
	cout<<"calling constructor"<<endl;
}

emp::~emp(){
	
	cout<<"calling destructor"<<endl;
	
}




int main(){
	
	emp *p;
	p=new emp();
	p->get();
	p->show();
	delete p;
	
}
