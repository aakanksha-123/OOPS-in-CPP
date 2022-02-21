#include <iostream>  
using namespace std; 

class A{
	int a;
	public:
		void getA(){
			cout<<"Enter value of A: ";
			cin>>a;
		}
		void putA(){
		cout<<"a="<<a;
		}
};

  class B:public A{
  	int b;
  	public:
  		void getB(){
  			cout<<"Enter value of B: ";
  			cin>>b;
		  }
		void putB(){
			cout<<"\nb="<<b;
		}
  };
  
  int main(){
  	B b;
  	b.getA();
  	b.getB();
  	b.putA();
  	b.putB();
  }
  
