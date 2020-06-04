#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
using namespace std;
int RNG,usernum,userinput,cpunum;
int main(){
	srand(time(NULL));
	while(usernum < 21){
	cout << "Type 1 for hit, Type 2 for stand, Type 3 to end\n";
	cin >> userinput;
	if (userinput == 1){
	RNG = rand () % 10+1;
	switch (RNG){ //Switch starts
	case 1:
	if (usernum > 10) { //Ace stand for 1 and 11 starts
		usernum = usernum + 1;
		cout << "Your value " << usernum << "\n";
	}
	else {
		usernum = usernum + 11;
		cout << "Your value " << usernum << "\n";
	} //Ace stand for 1 and 11 ends
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
    } //Swutch ends
    RNG = rand () % 10+1;
   	switch(RNG){//CPU switch starts
  	case 1:
	if (cpunum > 10) { //Ace stand for 1 and 11 starts
		cpunum = cpunum + 1;
	}
	else {
		cpunum = cpunum + 11;
	} //Ace stand for 1 and 11 ends
	break;
	case 2:
	cpunum = cpunum + 2;
	break;
	case 3:
	cpunum = cpunum + 3;
	break;
	case 4:
	cpunum = cpunum + 4;
	break;
	case 5:
	cpunum = cpunum + 5;
	break;
	case 6:
	cpunum = cpunum + 6;
	break;
	case 7:
	cpunum = cpunum + 7;
	case 8:
	cpunum = cpunum + 8;
	break;
	case 9:
	cpunum = cpunum + 9;
	break;
	case 10:
	cpunum = cpunum + 10;
	break;
  }//CPU swutch ends
  if (usernum == 21 and cpunum != 21){
  	cout << "You win\n";
  	cout <<"CPU value : " << cpunum << "\n";
  	cout <<"Your value: " << usernum << "\n";
  	return 0;
  } else if (cpunum == 21 and usernum != 21){
  	cout << "You lose\n";
  	cout <<"CPU value : " << cpunum << "\n";
  	cout <<"Your value: " << usernum << "\n";
  	return 0;
  } else if (cpunum == usernum){
  	cout << "Tie";
  	cout <<"CPU value : " << cpunum << "\n";
  	cout <<"Your value: " << usernum << "\n";
  	return 0;
  }
  } //While Loop ends
  if (userinput == 2) { //Stand
  	cout << "Your value: " << usernum << "\n" ;
  	if (cpunum > usernum and cpunum < 22){
  		cout << "You lose\n";
  		cout <<"CPU value : " << cpunum << "\n";
  		cout <<"Your value: " << usernum << "\n";
  		return 0;
  	} else if (cpunum < usernum and usernum < 22) {
  		cout <<"You win\n";
  		cout <<"CPU value : " << cpunum << "\n";
  		cout <<"Your value: " << usernum << "\n";
  		return 0;
  	} else if (cpunum == usernum){
  		cout<<"Tie";
  		return 0;
  	}
  	return 0;
  } 
  if (userinput == 3){
  	cout << "Ok loser\n";
  	return 0;
  }
} 
}