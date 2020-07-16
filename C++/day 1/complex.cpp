
/*
using namespace std; 
   
class Complex { 
public:
    int real, imag; 
 
    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 
       
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    } 
    
    void show();
}; 

void Complex::print() 
{ 
	cout << real << " + i" << imag << endl; 
	} 
   
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2; // An example call to "operator+" 
    c3.print(); 
} */


#include <bits/stdc++.h> 
using namespace std; 
  
class base 
{ 
public: 
    virtual void print () 
    { cout<< "print base class" <<endl; } 
   
    void show () 
    { cout<< "show base class" <<endl; } 
}; 
   
class derived:public base 
{ 
public: 
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
    { cout<< "print derived class" <<endl; } 
   
    void show () 
    { cout<< "show derived class" <<endl; } 
}; 
  
//main function 
int main()  
{ 
    base *bptr; 
    base d; 
    bptr = &d; 
       
    //virtual function, binded at runtime (Runtime polymorphism) 
    bptr->print();  
       
    // Non-virtual function, binded at compile time 
    bptr->show();  
  
}
