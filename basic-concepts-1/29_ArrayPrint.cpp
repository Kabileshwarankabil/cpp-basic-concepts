#include<iostream>
using namespace std;
int main(){
	int arr[]={12,23,545,76};
	int len=sizeof(arr)/sizeof(arr[0]);
	// For Each Loop
	for(int n:arr){
		cout<<n<<" ";
	}
	cout<<"\n";
	// Next Line
	// For Loop 
	for (int i = 0; i < len; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}