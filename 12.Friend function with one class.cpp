#include<bits/stdc++.h>
using namespace std;

class sample{
	int a,b;
	public:
		void getdata();
		friend float mean(sample s);
};
 void sample:: getdata(){
 	cout<"enter 2 no:";
 	cin>>a>>b;
 }
 float mean(sample s){   //defining friend fun no need of scope resolution op ::
 	return(s.a+s.b)/2.0;
 }
 int main(){
 	sample s;
 	s.getdata();
 	cout<<"The mean is: "<<mean(s);
 }
