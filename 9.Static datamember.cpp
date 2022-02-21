#include<bits/stdc++.h>
using namespace std;

class sample{
	static int count;
	public:
		void show();
		void showcount();
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
	a.showcount();
	cout<<"\n";
	b.showcount();
	cout<<"\n";
	c.showcount(); 
}
