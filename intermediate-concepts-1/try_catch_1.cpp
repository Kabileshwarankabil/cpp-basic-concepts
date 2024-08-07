#include<iostream>
using namespace std;
int main(){
    try{
        int fatherAge;
        int sonAge;
        cout<<"Father's Age : ";
        cin>>fatherAge;
        cout<<"Son's Age : ";
        cin>>sonAge;
        if(sonAge>fatherAge){
            throw -1;
        }
    }catch(int x){
        cout<<"Son's Age should be lesser than father's "<<endl;
    }
    return 0;
}
