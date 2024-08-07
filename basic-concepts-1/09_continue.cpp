#include<iostream>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        std::cout<<"i :"<<i<<std::endl;
    }
    return 0;
}