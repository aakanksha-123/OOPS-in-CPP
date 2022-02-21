#include<bits/stdc++.h>
using namespace std;

int main(){
	int *p; 
	p=new int;  //dynamic memory allocation
    cout<<"enter no:";
    
	cin>>*p;
	cout<<"no. is="<<*p;
	delete p;
}
