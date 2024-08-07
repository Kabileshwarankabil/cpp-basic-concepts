// Member Initializer List
#include<iostream>
using namespace std;
class Example{
	int a,b;
	public:
		// Method 1 of Using Constructor
		/*
		Example(int x,int y){
			a=x;
			b=y;
		}*/
		Example(int x,int y) :a(x),b(y){
		}
		void printAB(){
			cout<<a<<" "<<b<<'\n';
		}
};
int main(){
	Example Object(10,20);
	Object.printAB();
	return 0;
}
