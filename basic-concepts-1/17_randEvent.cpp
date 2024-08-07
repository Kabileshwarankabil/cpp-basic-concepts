#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int n=(rand()%5)+1;// 1-5
    switch(n){
        case 1:
            cout<<"You Won Nothing!🤣"<<endl;
            break;
        case 2:
            cout<<"You Won 10 Million 🎉"<<endl;
            break;
        case 3:
            cout<<"You Won a Ball-Point Pen 😔"<<endl;
            break;
        case 4:
            cout<<"No Comments 👿"<<endl;
            break;
        case 5:
            cout<<"Try Next-Time 👋"<<endl;
            break;
        default:
            cout<<"Sorry for Inconvenience 🙏";
    }
    return 0;
}
/*
#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	int computer = (rand() % 100 + 1);
	int player;
	int score = 10;
	do {
		cout << "Guess The Right Number : ";
		cin >> player;
		if (computer > player) {
			cout << "\t>> Your Number is Less Than Machine's !" << endl;
			score--;
		}
		else if (computer < player) {
			cout << "\t>> Your Number is Greater Than Machine's !" << endl;
			score--;
		}
		else {
			cout << "\t>> Your Number Matches To Machine's !" << endl;
			break;
		}
	} while (score != 0);
	cout << "--------------------------------------------" << endl;
	cout << "Your Guess : " << player << endl;
	cout << "Machine's Guess : " << computer << endl;
	cout << "Score : " << score << "/10" << endl;
	cout << "--------------------------------------------" << endl;
	return 0;
}
*/