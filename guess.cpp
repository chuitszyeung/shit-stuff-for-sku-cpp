#include <iostream> //Basic input and output
#include <time.h> // Import time
int userInput, number, tries; //Set up variables
using namespace std; //So lazy so me use namespace instead of std::
int main(){
	srand(time(NULL)); //Set random seed to time
	number = rand() % 100+1; //Generate a number from 1-100
	do { //do loop
		cout << "Guess a number (1-100)"; 
		cin >> userInput; // input
		tries = tries + 1;
		if(userInput < number) cout << "Too small\n"; // if too smal show hint
		else if (userInput > number) cout << "Too big\n"; // if too bug show hint
	} while (userInput != number); //loop condition
	cout << "Bingo\nYou tried " << tries << "times"; //got right ans

	return 0; //exit with code 0
}