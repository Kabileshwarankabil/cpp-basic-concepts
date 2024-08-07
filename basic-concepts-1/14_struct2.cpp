#include<iostream>
using namespace std;
struct bookDetails{
    string title;
    string author;
    int releasedYear;
    int noOfPages;
};
int main(){
    struct bookDetails book1;
    struct bookDetails book2;

    book1.title="JollyOhJolly";
    book1.author="KD Guruji";
    book1.releasedYear=2040;
    book1.noOfPages=10289;

    book2.title="How to Become Expert in One Night";
    book2.author="Alexander Billy";
    book2.releasedYear=1921;
    book2.noOfPages=2;

    cout<<"Book -1 : "<<book1.title<<endl;
    cout<<"Book -2 : "<<book2.title<<endl;

    
}