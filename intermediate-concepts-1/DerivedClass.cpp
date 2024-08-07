// Derived Class
#include<iostream>
using namespace std;
class Human{
	public:
		// constructor
		Human(){
			cout<<"This is Parent Constructor"<<'\n';
		}
		// destructor
		~Human(){
			cout<<"This is Parent Destructor"<<'\n';
		}
};
class Person:public Human{
	public:
		// constructor
		Person(){
			cout<<"This is Child Constructor"<<'\n';
		}
		~Person(){
			cout<<"This is Child Destructor"<<'\n';
		}
};
int main(){
	Person p1;
	cout<<"Hey, I'm From Main Function"<<'\n';
	return 0;
}
