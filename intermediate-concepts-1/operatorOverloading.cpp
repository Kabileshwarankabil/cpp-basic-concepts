// operator overloading 
#include<iostream>
using namespace std;
class Number{
	int number;
	public:
		Number(){}
		Number(int n){
			number=n;
		}
		Number operator+(Number n1){
			Number newNumber;
			newNumber.number=number+n1.number;
			return newNumber;
		}
		void print(){
			cout<<number<<endl;
		}
};
int main(){
	Number a(10);
	Number b(21);
	Number c=a+b;// a.operator+(b)
	c.print();
	return 0;
}
