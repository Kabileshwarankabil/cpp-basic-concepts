// Class Composition
/*
	To Use a class in another class we need 
	member initializer Not a Normal Constructor
*/
#include<iostream>
using namespace std;
class BirthDay{
	int day,month,year;
	public:
		/* We can also use member initializer but to differentiate 
		normal constructor is used here,*/
		BirthDay(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		void printDOB(){
			cout<<"D.O.B : ";
			cout<<day<<"/"<<month<<"/"<<year<<'\n';
		}
};
class Person{
	string name;
	BirthDay dob;
	public:
		Person(string n,BirthDay b):name(n),dob(b){
		}
		void printDetails(){
			cout<<name<<'\n';
			dob.printDOB();
		}
};
int main(){
	BirthDay bday(9,4,2003);
	Person p1("Kabileshwaran",bday);
	p1.printDetails();
	return 0;
}
