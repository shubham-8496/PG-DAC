#include<iostream>

using namespace std;

class base1

{

protected:
	
    int a;

    void get()
    {

        cout<<"enter a= ";
        cin>>a;
    }
    void show()
    {

    cout<<a<<endl;
    }
};

class base2
{
	
protected:
	
    int b;

    
        void set()
        {
            cout<<"enter b= ";
            cin>>b;

        }
        void display()
        {
            cout<<b<<endl;
        }
};

class drv : public base1 , public base2
{

    int c,d;
public:
    void accept()
    {
        get();
        set();

    }
    void adddiff()
    {
		c = a+b;
		d = a-b;
    }
//   void diff()
//    {
//   		 
//    }
    void printmessage()
    {
        show();
        display();
        cout<<"sum="<<c<<endl;
        cout<<"diff="<<d;
    }
    
};

int main ()

{
    drv obj;
    obj.accept();
    obj.adddiff();
    //obj.diff();
    obj.printmessage();
    return 0;
}

