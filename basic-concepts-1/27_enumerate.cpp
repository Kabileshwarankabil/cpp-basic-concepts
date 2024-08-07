#include<iostream>
using namespace std;
int main(){
    enum color{Orange,Red,Blue,Black,White,Grey};
    color mycolor=Blue;
    cout<<mycolor;//prints the index of Blue in color -> 2 
    return 0;

}