#include<bits/stdc++.h>
using namespace std;

class integer{
	int x,y;
	public:
		integer(){
			
		}
		integer(int x1, int y1=30){
			x=x1;
			y=y1;
		}
		void show(){
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
		}
	};
int main(){
	integer i; //object created then compiler automatically called the constructor i.e. default constructor
	integer j(10);
	i.show();
	j.show();
}
