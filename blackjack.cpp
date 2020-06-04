#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
using namespace std;
int RNG,usernum,userinput;
int main(){
	srand(time(NULL));
	while(usernum < 21){
	cout << "Type 1 for hit, Type 2 for stand, Type 3 to end\n";
	cin >> userinput;
	if (userinput == 1){
	RNG = rand () % 7+1;
	switch (RNG){
	case 1:
	if (usernum > 10) {
		usernum = usernum + 1;
		cout << "Your value " << usernum << "\n";
	}
	else {
		usernum = usernum + 11;
		cout << "Your value " << usernum << "\n";
	}
	break;
	case 2:
	usernum = usernum + 2;
	cout << "Your value " << usernum << "\n";
	break;
	case 3:
	usernum = usernum + 3;
	cout << "Your value " << usernum << "\n";
	break;
	case 4:
	usernum = usernum + 4;
	cout << "Your value " << usernum << "\n";
	break;
	case 5:
	usernum = usernum + 5;
	cout << "Your value " << usernum << "\n";
	break;
	case 6:
	usernum = usernum + 6;
	cout <<"Your value " << usernum << "\n";
	break;
	case 7:
	usernum = usernum + 7;
	cout <<"Your value " << usernum << "\n";
	break;
	case 8:
	usernum = usernum + 8;
	cout <<"Your value " << usernum << "\n";
	break;
	case 9:
	usernum = usernum + 9;
	cout <<"Your value " << usernum << "\n";
	break;
	case 10:
	usernum = usernum + 10;
	cout <<"Your value " << usernum << "\n";
	break;
    }
    if (usernum == 21){
    	cout <<"You won";
    }
    else if (usernum > 21){
    	cout <<"You lost";
    }
  }
  else if (userinput == 2) {
  	std::cout << "Your value: " << usernum << "\n" ;
  	return 0;
  } 
} 
}