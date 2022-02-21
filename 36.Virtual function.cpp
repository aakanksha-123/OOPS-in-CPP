#include<bits/stdc++.h> 
using namespace std;

class Base{
	public:
	virtual	void display(){  //virtual function provide us facility of runtime polymorphism
			cout<<"I am in base class";
		}
};
class der: public Base{
	public:
		void display(){
			cout<<"\nI am in derived class";
		}
};
int main(){
	Base *ptr;
	Base b;
	ptr=&b;
	ptr->display();
	der d;
	ptr=&d;
	ptr->display();
}
