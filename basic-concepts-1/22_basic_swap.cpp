// using a temporary variable
/* 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int temp;
    cout<<" \n\t--Before Swapping-- "<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;

    temp=a;
    a=b;
    b=temp;
    cout<<" \n\t--After Swapping-- "<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return 0;
}
*/
// Without a temp variable 
#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping "<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return 0;
}