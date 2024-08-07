#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		arr[i]=i+(i*10)+9;
	}
	for(int n:arr){
		cout<<n<<" ";
	}
	return 0;
}
