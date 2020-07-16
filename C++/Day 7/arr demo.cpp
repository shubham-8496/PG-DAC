#include<iostream>
using namespace std;
int main(){

	int size,i,j;
	cout<<"enter size";
	cin>>size;
	int *p;
	p = new int[size];
		cout<<"enter an element";
	for( i=0;i<size;i++)
	{
	
		cin>>*(p+i);
	}
	cout<<"array of elemets are:"<<endl;
	
		for(j=0;j<size;j++)
	{
		
		cout<<*(p+j)<<endl;
	}
	return 0;
}	
/*
int arr[]={1,2,3};

for(int i=0;i<3;i++){
	cout<<arr[i];

}
}
*/
