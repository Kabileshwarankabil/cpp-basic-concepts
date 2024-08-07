// Virtual Functions & Pure Virtual Functions
#include<iostream>
using namespace std;
class Batsman{
	public:
		//virtual void specialShot()=0;// pure virual function
		virtual void specialShot(){
			cout<<"Special Shot "<<endl;
		}
};
class Dhoni:public Batsman{
	public:
		void specialShot(){
			cout<<"Helicopter Shot "<<endl;
		}
};
class Kohli:public Batsman{
	public:
		void specialShot(){
			cout<<"Cover Drive "<<endl;
		}
};
int main(){
	Dhoni dhoni;
	Kohli kohli;
	
	Batsman* batsman1=&dhoni;
	Batsman* batsman2=&kohli;
	
	/* The below Code displays "Special Shot" Which is assigned in base class
		Because when we points to base class it'll takes as it's method 
		to use the method of specific class (&obj) we use virtual keyword in front 
		of the method in base class ,
		if such method is declared as 0 then it's pure virtual function 
		that means it has no use in the base class
	 */
	batsman1->specialShot();
	batsman2->specialShot();
	return 0;
}
