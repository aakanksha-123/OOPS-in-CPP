#include<bits/stdc++.h>
using namespace std;

class integer{
	int x;
	int y;
	public:
		integer(){
			
		}
		integer(int x1,int y1){
			x=x1;
			y=y1;
		}
		~integer(){   //destructor destroys the object
			cout<<"Exit";
		//	cout<<"\nExit";
		//	cout<<"\nExit";
		}
		void show(){
			cout<<"x="<<x;
			cout<<"y="<<y;
		}
};
int main(){
	
	int j(10,20);
	j.show();
}

