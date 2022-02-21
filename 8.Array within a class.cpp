#include<bits/stdc++.h>
using namespace std;

class sample{
	private:
		int a[4];
	public:
		void getdata();
		void display();
		void sum();
};
 void sample:: getdata(){
 	cout<<"enter array elements:";
 	for(int i=0;i<4;i++){
 		cin>>a[i];
	 }
 }
 void sample:: display() {
 	cout<<"array elements are:";
 	for(int i=0;i<4;i++){
 		cout<<"\n"<<a[i];
	 }
 }
 
 void sample:: sum(){
 	int sum=0;
 	for(int i=0;i<4;i++){
 		sum=sum+a[i];
 		 }
 		 cout<<"\n";
 		 cout<<"sum is "<<sum;
 }
 
 int main(){
 	sample s;
 	s.getdata();
 	s.display();
 	s.sum();
 }
