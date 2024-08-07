#include<iostream>
using namespace std;
int searchElement(int array[],int ele,int size);
int main(){
    int numbers[]={12,43,14,87,98,76,45};
    int element;
    int size=sizeof(numbers)/sizeof(numbers[0]);
    cout<<"Search :";
    cin>>element;
    int indexValue=searchElement(numbers,element,size);
    if(indexValue!=-1){
        cout<<"Found in "<<indexValue<<"th index"<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
    return 0;
}
int searchElement(int array[],int ele,int size){
    for(int i=0;i<size;i++){
        if(array[i]==ele){
            return i;
        }
    }
    return -1;
}
/*
#include<iostream>
using namespace std;
int searchNumber(int list[], int size, int element);
int main() {
	int nList[] = { 12,34,54,65,23,76,39,89 };
	int element, size,index;
	size = sizeof(nList) / sizeof(nList[0]);
	cout << "Search Number : ";
	cin >> element;
	index = searchNumber(nList, size, element);
	if (index != -1) {
		cout << "Found In " << index + 1 << " th Position of the array!" << endl;
	}
	else {
		cout << "Not Found " << endl;
	}

}
int searchNumber(int list[], int size, int element) {
	for (int i = 0; i < size; i++) {
		if (list[i] == element) {
			return i;
		}
	}
	return -1;
}
*/