#include<iostream>

using namespace std;

class Distance{
	
	int feet;
	int inches;
	
public:
	void get();
	//Distance();
	void show();
	 Distance add(Distance &p,Distance &q)
{
	Distance temp;
	feet=p.feet+q.feet;
	inches=p.inches+q.inches;
	return temp;
	
}
	
};

void Distance::get()
{
	
	cout<<"enter a feet and inches:";
	cin>>feet>>inches;
}

void Distance::show()
{
	cout<<"feet="<<feet<<" "<<"inches="<<inches<<endl;
	
}



int main()
{
	
	Distance d1,d2,d3;
    d1.get();
	d2.get();
	d3.add(d1,d2);
	d3.show();
	
	return 0;
	}
