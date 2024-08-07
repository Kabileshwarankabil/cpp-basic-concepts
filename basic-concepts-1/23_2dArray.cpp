#include<iostream>
using namespace std;
int main(){
    string details[][3]={{"std-01","Kabileshwaran","Computer Science"},
                        {"std-02","Visura de Silva","Computer Science"},
                        {"std-03","Kukapriyan","Physical Science"}};
    int rows=sizeof(details)/sizeof(details[0]);
    int columns=sizeof(details[0])/sizeof(details[0][0]);

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<details[i][j]<<endl;
        }
        cout<<"-------------------------"<<endl;
    }
    return 0;
}