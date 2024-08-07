#include<iostream>
using namespace std;
int main(){
	int arr[2][3]={
				{14,98,86},
				{75,96,20}
				};
	int rows=sizeof(arr)/sizeof(arr[0]);
	int cols=sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
