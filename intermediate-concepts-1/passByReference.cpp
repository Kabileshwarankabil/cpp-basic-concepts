#include<iostream>
using namespace std;
void passByValue(int a){
	a=45; 
	// 1 -> 10(x)
	// 2 -> 45(a)
	// This doesn't make change in original variable
}
void passByReference(int* a){
	*a=78;// the value of a = 78
	// 1 -> 10(x)
	// 2 -> 1(*a)
	// 1 -> 78
	// This make change in Original variable
}
int passByRefer(int* k){
	*k=100;
	return *k;
}
int main(){
	int x=10;
	passByValue(x);// passing value
	cout<<x<<'\n';
	passByReference(&x);// passing reference(address)
	cout<<x<<'\n';
	
	int k=9;
	int newk=passByRefer(&k);
	cout<<newk<<'\n';
	return 0;
}
