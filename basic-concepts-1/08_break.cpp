#include<iostream>
int main(){
    for(int i=1;i<10;i++){//executes 1 - 9
        std::cout<<i<<std::endl;
        if(i==4){
            break;
        }
    }
    return 0;
}