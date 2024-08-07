// Using const in class 
// const - does not change
#include<iostream>
using namespace std;
class Example{
	int a; // private
	public:
		Example(){
			a=1;
		}
		void changeA(){
			a=9;
		}
		void printA() const{
			cout<<a<<'\n';
		}
};
int main(){
	Example object;
	Example* pObject=&object;
	pObject->printA();// a=1 , Constructor initializes a=1;
	pObject->changeA();// changes to a=9;
	pObject->printA();// prints 9 , changed to a=9;
	const Example o2;
	// o2.changeA();// This makes error because class is const 
	o2.printA();// method printA is also a const 
	return 0;
}
