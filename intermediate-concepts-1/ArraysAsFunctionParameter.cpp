#include<iostream>
using namespace std;
void print(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int nums[]={2,3,4,6,7,8,9,12,34,545,6};
	print(arr,sizeof(arr)/sizeof(arr[0]));
	cout<<"\n";
	print(nums,sizeof(nums)/sizeof(nums[0]));
	return 0;
	
}
