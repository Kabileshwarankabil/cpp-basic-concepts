/* 
polymorphism
	Single object having many forms
	if only used inheritance
*/
#include<iostream>
using namespace std;
class Batsman{
	protected:
		int runs;
	public:
		void setRuns(int runs){
			this->runs=runs;
		}
};
class Dhoni:public Batsman{
	public:
		void printScore(){
			cout<<"Dhoni's Runs : "<<runs<<endl;
		}
};
class Kohli:public Batsman{
	public:
		void printScore(){
			cout<<"Kohli's Runs : "<<runs<<endl;
		}
};
int main(){
	Dhoni dhoni;
	Kohli kohli;
	
	// polymorphism pointer Batsman used to modify both Dhoni, Kohli classes
	Batsman* batsman1=&dhoni;// Batsman is parent class for Dhoni class
	Batsman* batsman2=&kohli;// Batsman is parent class for Kohli class
	
	batsman1->setRuns(67);
	batsman2->setRuns(45);
	
	dhoni.printScore();
	kohli.printScore();
	return 0;
}











