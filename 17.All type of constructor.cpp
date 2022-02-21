#include<bits/stdc++.h>
using namespace std;

class integer{
	int x,y;
	public:
		integer(){   //default constructor
		
		}
		integer(int x1, int y1){ //parameterised constructor
			x=x1;
			y=y1;
		}
		integer(integer &m){  //copy constructor
			x=m.x;
			y=m.y;
		}
		void show(){  
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
		}
};
int main(){
	integer i;
	integer j(10,20);
	integer k(j);
	i.show();
	j.show();
	k.show();
}
