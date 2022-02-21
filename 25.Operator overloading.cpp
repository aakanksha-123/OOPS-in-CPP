#include<bits/stdc++.h>
using namespace std;

class space{
	int x,y,z;
	public:
		space(){
			
		}
		space(int x1,int y1, int z1){
			x=x1;
			y=y1;
			z=z1;
		}
		void operator -(){
			x=-x;
			y=-y;
			z=-z;
		}
		void show(){
			cout<<"\nx="<<x;
			cout<<"\ny="<<y;
			cout<<"\nz="<<z;
		}
};

int main(){
	space s(10,20,-30);
	s.show();
	-s;
	cout<<"\nAfter applying new op";
	s.show();
}
