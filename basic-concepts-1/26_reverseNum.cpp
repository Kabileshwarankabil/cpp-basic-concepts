#include<iostream>
using namespace std;
int reverseNum(int number);
int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<"Reversed Number : "<<reverseNum(num)<<endl;

}
int reverseNum(int number){
    int reverse_number=0;
    while(number!=0){
        int n=number%10;
        reverse_number=reverse_number*10 + n;
        number=number/10;
    }
    return reverse_number;
}