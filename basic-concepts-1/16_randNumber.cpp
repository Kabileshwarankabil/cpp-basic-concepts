#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));// 0 or null
    int n1=rand()%10;// Generates from 0-9
    cout<<n1<<endl;
    return 0;
}