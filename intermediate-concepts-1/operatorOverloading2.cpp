#include<iostream>
using namespace std;
class Number{
	int number;
	public:
		Number(){}
		Number(int n){
			number=n;
		}
		Number operator*(Number s){
			Number newNumber;
			newNumber.number=number * s.number;
			return newNumber;
		}
		void print(){
			cout<<number<<endl;
		}
};
int main(){
	Number a(2);
	Number b(5);
	Number c=a*b;
	c.print();
	return 0;
	
}
