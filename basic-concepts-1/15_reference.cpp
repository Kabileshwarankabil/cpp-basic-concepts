#include<iostream>
using namespace std;
int main(){
    string food="pizza";
    string &meal=food;
    cout<<"food : "<<food<<endl;
    cout<<"&meal : "<<&meal<<endl;
    cout<<"meal : "<<meal<<endl;
    return EXIT_SUCCESS;
}