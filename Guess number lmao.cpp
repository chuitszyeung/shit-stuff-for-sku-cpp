#include <iostream>
#include <cstdlib>
int num1,num2,uplim,lowlim,score;
using namespace std;
int main(){
	lowlim = 1;
	// Choose number
	cout<<"Please choose a number from 1 to 10\n";
	num1 = rand() % 10+1;
	cin >> num2;
	if (num1 == num2){
		cout <<"You won";
		return 0;
	}
	else if(num1 > num2){
		num2 = lowlim;
		cout <<"Please choose a number from ";
		cout << lowlim;
		cout <<" to ";
		cout << uplim;
		cin >> num2;
	}
	else if(num1 < num2){
		num2 = uplim;
        cout <<"Please choose a number from ";
		cout << lowlim;
		cout <<" to ";
		cout << uplim;
        cin >> num2;
	}
	else if(num2 > 10){
		cout <<"Error number";
		return 0;
	}
	else {
		cout <<"Error number";
		return 0;
	}
}