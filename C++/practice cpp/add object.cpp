#include<iostream>
using namespace std;

class d
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
		 d add(d &p,d&q)
{
	
	feet=p.feet+q.feet;
	inch=p.inch+q.inch;
	
	
}		
};
int main()
{
	d a,b,c;

	a.get();
	b.get();
	c.add(a,b);
	
	c.show();
	return 0;
}
