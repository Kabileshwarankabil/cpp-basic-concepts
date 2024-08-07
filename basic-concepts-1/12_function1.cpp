#include<iostream>
using namespace std;
int max(int a,int b);//Declaring a Function
int main(){
    int n1=10;
    int n2=20;
    int maxiNum=max(n1,n2);//Calling a Function
    cout<<"The Max Value :"<<maxiNum;
}
int max(int a,int b){ //Defining a Function
    int result;
    if(a>b){
        result=a;
    }
    else{
        result=b;
    }
    return result;
}
/*
//Functions
#include<iostream>
using namespace std;
int max(int n1,int n2);//declaring a function
int main() {
	int a,b;
	cout << "Enter 1st Number : ";
	cin >> a;
	cout << "Enter 2nd Number : ";
	cin >> b;
	cout << "The Maximum Number : " << max(a, b);
	return 0;
}
int max(int n1, int n2)//function definition
{
	int maxiNum;
	n1 > n2 ? (maxiNum = n1) : (maxiNum = n2);
	return maxiNum;
}
*/