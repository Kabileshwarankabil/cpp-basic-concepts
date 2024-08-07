#include<iostream>
using namespace std;
struct selfIntro{
    string name;
    int age;
    char gender;
    bool stu;
};
int main(){
    struct selfIntro person1;
    struct selfIntro person2;
    struct selfIntro person3;
    //Person1_details
    person1.name="M.Kabileshwaran";
    person1.age=21;
    person1.gender='M';
    person1.stu=true;
    //Person2_details
    person2.name="M.Dhanush";
    person2.age=19;
    person2.gender='M';
    person2.stu=true;
    //Person3_details
    person3.name="S.Jayaletchumi";
    person3.age=50;
    person3.gender='F';
    person3.stu=false;

    //print the names
    cout<<"Person-1 :"<<person1.name<<endl;
    cout<<"Person-2 :"<<person2.name<<endl;
    cout<<"Person-3 :"<<person3.name<<endl;



}