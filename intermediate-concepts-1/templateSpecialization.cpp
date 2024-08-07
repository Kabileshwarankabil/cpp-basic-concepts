// Template Specialization
#include<iostream>
using namespace std;
template<class T> // --- typename or class ---
class Value{
	public:
		Value(T x){
			cout<<x<<" is a number "<<'\n';
		}
};
// For a Specific datatype 
template<>
class Value<char>{
	public:
		Value(char x){
			cout<<x<<" is a character "<<'\n';
		}
};
template<>
class Value<string>{
	public:
		Value(string s){
			cout<<s<<" is a word or a sentence "<<'\n';
		}
};
int main(){
	Value<int> v1(23);
	Value<double> v2(3.9);
	Value<char> v3('K');
	Value<string> v4("Kabil");
	return 0;
}
