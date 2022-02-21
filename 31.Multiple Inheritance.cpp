#include<bits/stdc++.h>
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
class B{
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
   class C:public A,public B{
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
   int main(){
  	C c;
  	c.getA();
  	c.getB();
  	c.getC();
  	c.putA();
  	c.putB();
  	c.putC();
  }
  
