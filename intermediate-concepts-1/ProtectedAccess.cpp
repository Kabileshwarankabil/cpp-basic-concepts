// Protected Access Modifier
#include<iostream>
using namespace std;
class Human{
	private:
		int age;// can't use this in child classes
	public:
		string name;
	protected:
		char gender;// 'M' -> Male , 'F' -> Female
		
};
class Person:public Human{
	public:
		void printValues(){
			cout<<name<<endl;
			cout<<gender<<endl;
	}
};
int main(){
	Person p1;
	p1.printValues();
	return 0;
}
