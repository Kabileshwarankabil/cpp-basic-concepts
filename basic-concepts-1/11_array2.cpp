#include<iostream>
//changing the value in an array.
int main(){
    std::string vehicles[4]= {"car", "scooter", "cycle", "bike"}; 
    vehicles [0]= "airplane"; 
    std::cout << vehicles[0];
}