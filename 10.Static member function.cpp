#include<bits/stdc++.h>
using namespace std;

class sample{
	static int count;
	public:
		void show();
		static void showcount();  //used to acess static variable ie. static int count
};

int sample::count;
void sample::show()
{
	cout<<"Hello"<<" ";
	count++;
}
void sample::showcount(){
	cout<<"count="<<count;
}

int main(){
	sample a,b,c;
	a.show();
	b.show();
	c.show();
	cout<<"\n";
sample::showcount(); //calling static method
}
