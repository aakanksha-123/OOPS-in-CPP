#include<bits/stdc++.h>
using namespace std;

class integer{
	int x,y;
	public:
		integer(){
		
		}
		integer(int x1, int y1){
			x=x1;
			y=y1;
		
		}
		void show(){
			cout<<"x="<<x;
			cout<<"\ny="<<y;
		}
};

int main(){
	integer i;
	integer();  //default constructor
	integer j(10,20); //parameterised constructor
	j.show();
	
}
