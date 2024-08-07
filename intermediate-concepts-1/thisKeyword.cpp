/*
	this Keyword..
	this-> : pointer , points to the object we created  
*/
#include<iostream>
using namespace std;
class Example{
	int var;
	public:
		Example(){
			var=1;
		}
		void print(){
			cout<<"a : "<<var<<endl;
			cout<<"this-> a: "<<this->var<<endl;
		}
};
int main(){
	Example e;
	e.print();
	return 0;
}

