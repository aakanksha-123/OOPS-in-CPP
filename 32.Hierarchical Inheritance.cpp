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
  class C:public A{
  	int c;
  	public:
  		void getC(){
  			cout<<"Enter value of C: ";
  			cin>>c;
		  }
		void putC(){
			cout<<"\nc="<<c;
		}
  };
  class D:public A{
  	int D;
  	public:
  		void getD(){
  			cout<<"Enter value of D: ";
  			cin>>D;
		  }
		void putD(){
			cout<<"\nc="<<D;
		}
  };
   class D1:public D{
  	int d1;
  	public:
  		void getD1(){
  			cout<<"Enter value of d1: ";
  			cin>>d1;
		  }
		void putD1(){
			cout<<"\nc="<<d1;
		}
  };
  int main(){
  D1 dd;
  dd.getA();
  dd.getD();
  dd.getD1();
  dd.putA();
  dd.putD();
  dd.putD1();
  }
  
