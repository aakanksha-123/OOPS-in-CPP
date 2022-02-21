#include<bits/stdc++.h>
using namespace std;

class xyz;
class abc{
	int a;
	public:
		void getdata(int i){
			a=i;  //a1.a
		}
		friend void max(abc a1,xyz x1);
};

class xyz{
	int x;
	public:
		void getdata(int j){
			x=j;   //x1.x
		}
		friend void max(abc a1,xyz x1);
};
void max(abc a1, xyz x1){  //defining friend fun no need of scope resolution op ::
	if(a1.a>=x1.x)
	 cout<<"a is greater";
	else
	cout<<"x is greater";
}
int main(){
	abc a1;
	a1.getdata(5);
	xyz x1;
	x1.getdata(6);
	max(a1,x1);
}
