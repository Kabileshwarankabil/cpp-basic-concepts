// Inheritance
#include<iostream>
using namespace std;
class Human{
	public:
		int no_legs=2;
		int no_hands=2;
		void talk(){
			cout<<"hey, hi "<<endl;
		}
		void eat(){
			cout<<"I am eating food!"<<endl;
		}
};
class Person:public Human{
	public:
		string name;
		Person(string n):name(n){
		}
};
int main(){
	Person p1("Kabil");
	p1.talk();
	p1.eat();
	cout<<p1.name;
	return 0;
}
