#include<bits/stdc++.h>
using namespace std;

class Greater{
	private:
		int a,b;
	public:
		void getdata();
		int largest();
		void display();
};
 
 void Greater:: getdata(){
 	cout<<"Enter two no."<<endl;
 	cin>>a>>b;
 }
int Greater:: largest() {
 	if(a>b){
 		return(a);
	 }
 		
 	else{
 		return(b);
	 }
	 
 }
 void Greater::display(){
 	cout<<largest();   //calling largest method inside display method ie. nesting of methods
 }
 
 int main(){
 	Greater g;
 	g.getdata();
 	g.largest();
 	g.display();
 }
