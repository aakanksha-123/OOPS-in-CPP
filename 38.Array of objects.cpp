#include<bits/stdc++.h>
using namespace std;

class employee{
	char name[5];
	int age;
	public:
		void getdata();
		void showdata();
		
	};
	void employee:: getdata(){
		cout<<"enter name and age:";
		cin>>name>>age;
	}
	void employee::showdata(){
		cout<<"\nname is"<<name;
		cout<<"\nage is"<<age;
	}
	int main(){
		employee e[3];
		for(int i=0;i<3;i++){
			e[i].getdata();
		}
		for(int i=0;i<3;i++){
			e[i].showdata();
		}
	}
