#include<iostream>
using namespace std;
int main(){
    int choice;
    int n1,n2;
    cout<<"Enter Correct Number :"<<endl;
    do{
        cout<<"1.Add :"<<endl;
        cout<<"2.Substract: "<<endl;
        cout<<"3.Multiplication :"<<endl;
        cout<<"4.Division: "<<endl;
        cout<<"5.Exit: "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"1st Number: ";
                cin>>n1;
                cout<<"2nd Number: ";
                cin>>n2;
                cout<<"The Sum of "<<n1<<" and "<<n2<<" = "<<n1+n2<<endl;
                break;
            case 2:
                cout<<"1st Number: ";
                cin>>n1;
                cout<<"2nd Number: ";
                cin>>n2;
                cout<<"The Substraction of "<<n1<<" and "<<n2<<" = "<<n1-n2<<endl;
                break;
            case 3:
                cout<<"1st Number: ";
                cin>>n1;
                cout<<"2nd Number: ";
                cin>>n2;
                cout<<"The Multiplication of "<<n1<<" and "<<n2<<" = "<<n1*n2<<endl;
                break;
            case 4:
                cout<<"1st Number: ";
                cin>>n1;
                cout<<"2nd Number: ";
                cin>>n2;
                cout<<"The Division of "<<n1<<" and "<<n2<<" = "<<n1/n2<<endl;
                break;
            case 5:
                break;
            default:
                cout<<"In-Valid Response"<<endl;
        }
    }while(choice!=5 || (choice<=4 && choice>=1));
}