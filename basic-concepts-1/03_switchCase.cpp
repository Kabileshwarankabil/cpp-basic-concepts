#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter Your Grade: ";
    cin>>grade;
    switch(grade){
        case 'A':
            cout<<"Out-Standing!";
            break;
        case 'B':
        case 'C':
            cout<<"Good!";
            break;
        case 'D':
            cout<<"Pass!";
            break;
        case 'F':
            cout<<"Try Again";
            break;
        default:
            cout<<"In-Valid Response";
    }
    return 0;
}