// Method 1
/*
#include<iostream>
using namespace std;
int main(){
    int num[]={90,20,10,300,80};//500
    int total=0;
    for(int n:num){
        total+=n;
    }
    cout<<"The Total :"<<total<<endl;
    return EXIT_SUCCESS;
}
*/

// Method 2
/*
#include<iostream>
using namespace std;
int sumOfArray(int num[],int size);
int main(){
    int num[]={90,20,10,300,80};//500
    int size=sizeof(num)/sizeof(num[0]);
    int total=sumOfArray(num,size);
    cout<<"The Total :"<<total<<endl;

}
int sumOfArray(int num[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=num[i];
    }
    return total;
}
*/