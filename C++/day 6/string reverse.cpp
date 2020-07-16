#include<iostream>
#include<string.h>
using namespace std;

class reverse{
	
	char str[50];
	int i,j;
	public:
	void stringInput();
	void stringReverse();
};


void reverse::stringInput(){

		cout<<"enter a string";
		
	for(i=0;i<=strlen(str)-1;i++)
	{
		cin>>str[i];
	
	}
     		break;
}

void reverse::stringReverse()
{
	for(i=strlen(str)-1;i>=0;i--)
	{
		cout<<str[i];
	}
}



int main(){

reverse r1;
r1.stringInput();
r1.stringReverse();
	return 0;
}


