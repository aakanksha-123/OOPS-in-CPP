#include<bits/stdc++.h>
using namespace std;

class integer{
	int x,y;
	public:
		integer(int x1,int y1){  //parameterised constructor
			x=x1;
			y=y1;
		}
		void showdata(){
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
		}
};
int main(){
	integer i(10,20);
	integer j(100,200);
	i.showdata();
	j.showdata();
}
