// Arrow Selection Operator
#include<iostream>
using namespace std;
// accessing method using pointer and arrow selection
class Example{
	public:
		void printHello(){
			cout<<"Hello "<<'\n';
		}
};
int main(){
	Example object;
	object.printHello();// Method 1
	Example* pObject=&object;
	pObject->printHello();// Method 2
	return 0;
}
