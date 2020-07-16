#include<iostream>

using namespace std;

class demo{
	

	int i,j;
	
	public:
		//void get();
	//	void get1();
		void display();
		void display1();
		int compare(int [],int []);
	
	
};

//void demo::get(){
//	cout<<"enter a element in a array:";
//	
//	for(i=0;i<3;i++)
//	{
//		cin>>arr1[i];
//		
//	}
//	
//}
//void demo::get1(){
//	cout<<"enter a element in a array:";
//	
//	for(i=0;i<3;i++)
//	{
//		
//		cin>>arr2[i];
//	}
//}

int demo::compare(int arr1[],int arr2[])
{
    cout<<"duplicate array:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				if(arr1[i]==arr2[j])
		{
				  	cout<<arr1[i]<<" ";
		}
		
		}
	}
		
	
}
//void demo::display()
//{
//cout<<"arr1=";
//	for(i=0;i<3;i++)
//	{
//		
//		cout<<arr1[i]<<" ";
//		
//	}
//
//}
//void demo::display1()
//{
//		cout<<"arr2=";
//	for(i=0;i<3;i++)
//	{
//		
//		cout<<arr2[i]<<" "<<endl;
//	}
//}

int main(){
	demo d1;
		int arr1[20]={10,20,30};
     	int arr2[20]={20,50,10};
	
	//d1.get();
//	d1.get1();
	//d1.display();
	//d1.display1();
	d1.compare(arr1,arr2);
}
