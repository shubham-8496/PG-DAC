#include<iostream>
 using namespace std;
 
 
 class demo
 {
 	int a,b;
 	
 	public:
 		demo();
 		demo(int);
 		demo(demo &);
 		demo(int ,int);
 		void show();		
 };
 
demo::demo()
{
	cout<<"enter  a number :";
	cin>>a>>b;
}
demo::demo(int i)
{
	a=i;
	cout<<a<<endl;
}
demo::demo(demo &p)
{
	a=p.a;
	b=p.b;
	
}

demo::demo(int i,int j){
	a=i;
	b=j;
}
void demo::show(){
	
	cout<<a<<" "<<b<<endl;
}
int main()
{
	
	demo d1;
	d1.show();
	demo d2(10);
//	d2.show();
	demo d3(10,20);
	d3.show();
	demo d4(d3);
	d4.show();
	return 0;
	
 } 
 
 
