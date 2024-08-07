// Class Destructor
/*
	Constructor -> when Object is created Constructor is called
	Destructor -> when the Object is not used anymore.
*/
#include<iostream>
using namespace std;
class Example{
	int a=90;
	public:
		// Constructor
		Example(){
			cout<<"Constructor"<<'\n';
		}
		// Destructor - when the object is not used anymore
		~Example(){
			cout<<"Destructor"<<'\n';
		}
};
int main(){
	Example object;
	cout<<"Hello World"<<'\n';
	return 0;// End of the program
}
