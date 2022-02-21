#include<bits/stdc++.h>
using namespace std;

class Add{
	private:
		int a,b;
	public:
		int addition(int x,int y);
	};
	inline int Add::addition(int x,int y){
		return x+y;
	}
	int main()
	{
		
		Add a1;
		cout<<a1.addition(5,3);
	}
