#include<bits/stdc++.h>
using namespace std;


void fun1(int y);

void fun1(int *y){
	*y=*y+10;
	cout<<"y is ="<<*y; //20
	cout<<"\n";
}
int main(){
	int x=10;  
	fun1(&x);
	cout<<"value of x after call by address: "<<x;  //20  because changes made at that adress so it will reflect here also
	

}
