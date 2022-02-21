#include <iostream>  
using namespace std; 

class Base{
	public:
		void display(){
			cout<<"I am in base class";
		}
};
 class derived:public Base{
 	public:
 		void display2(){
 			cout<<"\nI am in derived class";
		 }
	
 };
 int main(){
 	derived d;
 	d.display();
 	d.display2();
 }
