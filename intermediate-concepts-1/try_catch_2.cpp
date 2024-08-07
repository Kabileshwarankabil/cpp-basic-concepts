#include<iostream>
using namespace std;
int main(){
    try{
        int a;
        int b;
        cout<<"Enter a number : ";
        cin>>a;
        cout<<"Enter another number : ";
        cin>>b;
        if(b==0){
            throw "error"; // can throw any data types
        }
    }catch(...){ // for any data types {DEFAULT}
        cout<<"Number Divison By 0 is An Error "<<endl;
    }
}