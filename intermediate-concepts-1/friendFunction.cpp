/* friend function
	used to modify or use private member of a class
*/
#include<iostream>
using namespace std;
class Example{
	int var;
	public:
		Example(){
			var=1;
		}
		friend void change(Example& e); // friend + function_proto-type
		void print(){
			cout<<var<<'\n';
		}
};
void change(Example& e){
	e.var=9;
}
int main(){
	Example obj;
	change(obj);
	obj.print();
	return 0;
}

