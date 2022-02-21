#include <bits/stdc++.h>  
using namespace std; 

class Alpha{
	int x;
	public:
		Alpha(int x1){
			x=x1;
		}
		void showx(){
			cout<<"x="<<x;
		}
};
class Beta{
	int y;
	public:
		Beta(int y1){
			y=y1;
		}
		void showy(){
			cout<<"y="<<y;
		}
};
class gamma:public Alpha,public Beta{
	int m,n;
	public:
		gamma(int a,int b,int c,int d):alpha(a),beta(b){
			m=c;
			n=d;
		}
		void showmn(){
			cout<<"m="<<m;
			cout<<"n="<<n;
		}
};
int main(){
	gamma g(10,20,30,40);
	g.showx();
	g.showy();
	g.showmn();
}
