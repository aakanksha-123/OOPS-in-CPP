#include<bits/stdc++.h>
using namespace std;

class integer{
	int x;
	int y;
	public:
		integer(){
			
		}
		integer(int x,int y){
			x=x;
			y=y;
		}
		
		integer(integer &m){
			x=m.x;
			y=m.y;
		}
		void show(){
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
		}
};

int main(){
	integer j(10,20);
	integer i(j);
	integer k=j;
	j.show();
	i.show();
	k.show();
}
