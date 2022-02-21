#include<bits/stdc++.h>
using namespace std;

class Add{                //class is declare for addition
	private:
		int a,b,c;
	public:
		void getdata(){
			cout<<"Enter two no: ";
			cin>>a>>b;
		}
		void adddata(){
			c=a+b;
			cout<<"sum is="<<c;
		}
		
};
int main(){
	Add a1;        //object of add class created
	a1.getdata();
	a1.adddata();
	
}
