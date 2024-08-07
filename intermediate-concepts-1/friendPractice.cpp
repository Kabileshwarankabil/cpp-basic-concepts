#include<iostream>
using namespace std;
class Student{
	string name;
	int age;
	public:
		Student(){
			name=" ";
			age=1;
		}
		friend void change(Student& s,string name,int age);
		void print(){
			cout<<name<<'\n';
			cout<<age<<'\n';
		}
};
void change(Student& s,string name,int age){
	s.name=name;
	s.age=age;
}
int main(){
	Student s1;
	change(s1,"Kabil",21);
	s1.print();
	return 0;
}
