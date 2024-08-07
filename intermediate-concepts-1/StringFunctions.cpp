// Common String Functions...
/*
	cin>> string_dataTypes -> Only takes a word if user enters a space 
		it doesn't take the inputs after a space 
	---- use getline(cin,str); -----
	assigning a string -> 1. string str1="kkk";
						  2. string str2("kjl");
	sub-string -> varName.substr(0,3); 0 => index 3=> no_of_characters/ length
	swap -> str1.swap(str2);
	find -> str.find("---"); starting index
	rfind-> start finding in right side str.rfind("--");
*/
#include<iostream>
using namespace std;
int main(){
	string name="Kabil";
	/*
	cout<<name.size()<<'\n';// length of a string
	string str1("dhanu");// assign a string ..
	string str2;
	cin>>str2;// only for one word doesn't take after a space 
	string str3;
	cout<<str2<<'\n';
	getline(cin>>ws,str3);// ws is used to take inputs after another input..(No Idea)
	cout<<str3<<'\n';
	*/
	// Kabil
	/*
	cout<<name.substr(0,3)<<'\n';// Kab
	cout<<name.substr(3,2)<<'\n';// il
	cout<<name.substr(0,1)<<'\n';// K
	*/
	/*
	string str1="abcd";
	string str2("efgh");
	cout<<str1<<" "<<str2<<'\n';
	str1.swap(str2);// str1-> str2 | str2 -> str1 Swaps..
	cout<<str1<<" "<<str2<<'\n';
	*/
	// Find....
	// find in normal way --> from left
	string great("A.P.J Abdul Kalaam");
	cout<<great.size()<<'\n';// 18 -> includes spaces and dots too..
	cout<<great.find("Ab")<<'\n';// 6
	cout<<great.find("A")<<'\n';// 0
	// find from right
	cout<<great.rfind("Kal")<<'\n';//12
	cout<<great.rfind("am")<<'\n';//16
	return 0;
}
