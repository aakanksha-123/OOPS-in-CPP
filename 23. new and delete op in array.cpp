#include<bits/stdc++.h>
using namespace std;

int main(){
	int *p=new int[10];
	cout<<"Enter 10 no.";
	for(int i=0;i<10;i++){
		cin>>*(p+i);
	}
	cout<<"The no. are";
	for(int i=0;i<10;i++){
		cout<<"\n"<<*(p+i);
	}
	delete []p;
}
