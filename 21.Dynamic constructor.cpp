#include<bits/stdc++.h>
using namespace std;

class integer{
	int *x;
	int *y;
	public:
		integer(){
				}
		integer(int x1,int y1){
			x=new int;
			*x=x1;
			y=new int;
			*y=y1;
		}
		void add(){
			int sum=*x+*y;
			cout<<"sum is="<<sum;
		}
};
int main(){
	integer j(10,20);
	j.add();
}
