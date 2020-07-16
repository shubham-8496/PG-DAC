#include<iostream>
using namespace std;

class box
{
int l,b,h;
	public:
		box(int);
		box(int,int);
		box(int,int,int);
		void show();	
};

box::box(int i){
	
	l=b=h=i;
}

box::box(int i,int j)
{
l=b=i;
h=j;	
}

box::box(int i ,int j, int k)
{
	l=i;
	b=j;
	h=k;
}
void box::show(){
	int res=l*b*h;
	cout<<res<<endl;
}
int main(){
	box b1(10);
	b1.show();
	box b2(10,20);
	b2.show();
	box b3(10,20,30);
	b3.show();
}



