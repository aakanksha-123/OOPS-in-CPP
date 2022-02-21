#include<bits/stdc++.h>   //hybrid=multiple inheritance + multiple inheritance
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
  class D:public B,public C{
  	int D;
  	public:
  		void getD(){
  			cout<<"Enter value of D: ";
  			cin>>D;
		  }
		void putD(){
			cout<<"\nd="<<D;
		}
  };
  int main(){
  	D d;
  	B b;
  	b.getA();
  	d.getB();
  	d.getC();
  	d.getD();
  	

  	b.putA();
  	d.putB();
  	d.putC();
  	d.putD();
  	
  }
  
  
