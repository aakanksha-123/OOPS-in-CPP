#include<bits/stdc++.h>
using namespace std;

class sample{
	int x,y;
	public:
		void getdata(int x1,int y1=20){
			x=x1;
			y=y1;
		}
		void showdata(){
			cout<<"x= "<<x;
			cout<<"\ny= "<<y;
		}
};
int main(){
	sample s;
	s.getdata(10);  //defalut value for y=20 will be consider.
	s.showdata();
	
}
