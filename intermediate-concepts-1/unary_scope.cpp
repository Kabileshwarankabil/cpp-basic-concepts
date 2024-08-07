#include<iostream>
using namespace std;
int a=20;//Global variable
int main(){
    int a=10;//Local variable
    cout<<"a : "<<a<<endl;//prints the local variable which is close to the scope
    cout<<"a : "<<::a<<endl;//prints the global variable with same variable name
    return 0;
}