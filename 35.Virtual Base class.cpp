#include<bits/stdc++.h>
using namespace std;

class Student{
	protected:
		int rollno;
		public:
			void getrollno(){
				cout<<"Enter rollno";
				cin>>rollno;
			}
			void showrollno(){
				cout<<"\n rollno is="<<rollno;
			}
};
class test : virtual public student{

	protected:
		int test1,test2;
		void gettest(){
			cout<<"Enter test1,test2";
			cin>>test1>>test2;
		}
		void showdtest(){
			cout<"test1 is="<<test1;
			cout<<"test2 is="<<test2;
		}
};
class sports:public virtual student{
	protected:
		int score;
		void getscore(){
			cout<<"enter score";
			cin>>score;
		}
		void showscore(){
			cout<<"score is"<<score;
		}
};
class total:public test,public sports{
	public:
		void showtotal(){
			int t;
			t=test1+test2+score;
			showrollno();
			showtest();
			showscore();
			cout<<"\n total score is="<<t;
		}
};
int main(){
	total t;
	t1.getrollno();
	t1.gettest();
	t1.getscore();
	t1.showtotal();
	
}
