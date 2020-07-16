#include<iostream>

using namespace std;

class box{
	int l,b,h;
	
public:
	void get();
	int compare(box &);
	
};

void box::get()
{
	cout<<"enter a number:";
	cin>>l>>b>>h;
}

int box::compare(box &p){
	int input1;
	int input2;
	input1=l*b*h;
	input2=p.l*p.b*p.h;
	
	if(input1==input2)
		return 0;
	else
		return 1;
		
	
}

int main()
{
	box b1,b2;
	b1.get();
	b2.get();
	
	int r=b1.compare(b2);
	if(r==0)
		cout<<endl<<"box are equal";
	else
		cout<<"box are unequal";
	return 0;
}
