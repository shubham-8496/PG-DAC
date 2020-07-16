#include<iostream>
using namespace std;
class distance
{
	int feet;
	int inch;
	
	public:
		void get()
		{
			cout<<"enter feet and inches";
			cin>>feet>>inch;
		}
		void show()
		{
			cout<<"feet= "<<feet;
			cout<<"inches= "<<inch;
		}
			 distance add(distance &p)
{
	distance temp;
	temp.feet=feet+p.feet;
	temp.inch=inch+p.inch;
	return temp;
	
}		
};
int main()
{
	distance a;
	distance b;
	distance c;
	a.get();
	b.get();
	c=a.add(b);
	
	c.show();
	return 0;
}
