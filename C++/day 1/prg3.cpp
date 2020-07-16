/*
Show diamond shape ambiguity using a real life problem . Imagine meaningful classes from your end.
*/


#include "iostream"

using namespace std;

class LivingThing
{
	public:
			void breathe()
			{
				cout<<"breathing done !!!"<<endl;
			}
};

class Animal : virtual public LivingThing
{

};

class Reptile : virtual public LivingThing
{

};

class Snake : public  Animal , public Reptile
{
	
};

int main()
{
	Snake s;
	s.breathe();
	return 0;	
}
