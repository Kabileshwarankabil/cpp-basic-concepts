// pointer arithmetic
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3};
	int* p1=&arr[0];
	int* p2=&arr[1];
	int* p3=&arr[2];
	
	cout<<p1<<'\n';
	cout<<p2<<'\n';
	cout<<p3<<'\n';
	
	p1+=2; // this becomes p1 + 2*(sizeof(int))...
	cout<<p1<<'\n';
	
	cout<<"----------------"<<'\n';
	
	double deci=3.9;
	double* pDeci=&deci;
	cout<<pDeci<<'\n';
	pDeci++;// this becomes pDeci + 1*(sizeof(double))... 
	cout<<pDeci<<'\n';
	return 0;
}
