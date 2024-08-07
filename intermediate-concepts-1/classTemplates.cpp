// class templates
#include<iostream>
using namespace std;
template<typename T>
class Numbers{
	T x,y;
	public:
		Numbers(T x,T y){
			this->x=x;
			this->y=y;
		}
		T max(){
			if(x>y){
				return x;
			}
			return y;
		}
};
int main(){
	Numbers<int> n(10,20);
	Numbers<double> n2(3.4,9.1);
	cout<<n.max()<<endl;
	cout<<n2.max()<<endl;
	return 0;
}
