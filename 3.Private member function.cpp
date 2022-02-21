#include<bits/stdc++.h>
using namespace std;

class sample{
	private:
		void read();  //private member function
	public:
		void display();  ////public member function
			
};
void sample:: read(){
	cout<<"I am in private";
}
void sample::display(){
	cout<<"I am in public"<<"\n";
	read();  //calling private in public
}
int main(){
	sample s;
	s.display();
//	s.read();  //error 
	
}
