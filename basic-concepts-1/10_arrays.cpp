#include<iostream>
int main(){
    //initializing a array
    std::string nameList[4]={"Kabil","Dhanu","Mano","Jaya"};
    for(int i=0;i<sizeof(nameList)/sizeof(nameList[0]);i++){
        std::cout<<nameList[i]<<std::endl;
    }
    return 0;

}