// Function Templates
#include<iostream>
using namespace std;
template<typename T>
T add(T a, T b){
	return a + b;
}
template<typename K,typename L>
L sum(K x,L y){
	return x + y;
}
int main(){
	cout<<add(2,4)<<endl;// int
	cout<<add(3.4,9.8)<<endl;// double
	cout<<sum(2,9.5)<<endl;// int , double
	return 0;
}
