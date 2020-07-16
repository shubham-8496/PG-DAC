#include<iostream>

using namespace std;

class demo
{
	int a,b;
		public:
		void swap(int *,int *);
		void show();
};

 void demo::swap(int *a, int *b)
 {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
cout<<"a = "<<*a<<" "<<"b= "<<*b<<endl;	
}
void demo::show()
{

}
int main()
	{
	demo d1;
	int c,d;
	cout<<"enter an int";
	cin>>c>>d;
	d1.swap(&c,&d);
	d1.show();
}
