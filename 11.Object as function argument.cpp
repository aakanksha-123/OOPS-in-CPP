#include<bits/stdc++.h>
using namespace std;

class weight
{ int kg;
  int grm;
  public:
  	void getdata();
  	void showdata();
  	void adddata(weight w1,weight w2);	
};
 void weight::getdata(){
 	cout<<"\nEnter kg and grm";
 	cin>>kg>>grm;
 }
 void weight::showdata(){
 	cout<<"\nkg is="<<kg;
 	cout<<"\ngrm is="<<grm;
 }
 void weight::adddata(weight w1,weight w2){  //object pass as a argument
 	grm=w1.grm+w2.grm;
 	kg=grm/1000;
 	grm=grm%1000;
 	kg=kg+w1.kg+w2.kg;
 }
 
 int main(){
 	weight w1,w2,w3;
 	w1.getdata();  // 4 kg 500 grm
 	w2.getdata();  //3 kg 600 grm
 	w3.adddata(w1,w2); 
 	w1.showdata(); 
 	w2.showdata();
 	w3.showdata();
 	
 } 
