/*
	Pointers - variable that stores the address of another variable
	& variable_name = & -> address of operator
	int* -> int pointer -> stores the address of a integer value
*/
#include<iostream>
using namespace std;
int main(){
	int a=10;
	cout<<&a<<"\n";
	int* pa=&a;
	cout<<"Pointer :"<<pa<<"\n";
	char grade='A';
	char* pGrade=&grade; // char pointer
	string name="Kabileshwaran";
	string* pName=&name; // string pointer
	cout<<" grade : "<< grade<<"\n"<<" Pointer of grade : "<<pGrade<<'\n';
	cout<<" name : "<< name<<"\n"<<" Pointer of name : "<<pName<<'\n';
	return 0;
}
