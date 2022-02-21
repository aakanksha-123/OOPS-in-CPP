#include<bits/stdc++.h>
using namespace std;

class shape{  //abstract class which have at least one virtual function object cannot be created
	protected:
		float l;
	public:
		void getdata(){
			cout<<"\nEnter length or radius";
				cin>>l;
		}
		virtual float area()=0; //pure virtual function
};
class circle:public shape{
	public:
		float area(){
			return(3.14*l*l);
		}
};
class square:public shape{
	public:
		float area(){
			return (l*l);
		}
};
int main(){
	circle c;
	c.getdata();
	cout<<c.area();
	square s;
	s.getdata();
	float ans=s.area();
	cout<<"\n Area of square="<<ans;
}
