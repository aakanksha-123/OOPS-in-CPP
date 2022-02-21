#include<bits/stdc++.h>
using namespace std;

void sum(int,int);
float sum(float,float);
int main(){
	int x,y,z;
		x=10;
	    y=20;
	    sum(x,y);  //void sum(int x,int y) fun get call
	    
	float i=2.5,j=3.5,k;
	k=sum(i,j);       ////float sum(float i, float j) fun get call
	cout<<"\nThe sum is="<<k;
}
void sum(int x,int y){  
	int s;
	s=x+y;
	cout<<"sum is="<<s;
}
float sum(float i, float j){
	float k;
	k=i+j;
	return(k);
}
