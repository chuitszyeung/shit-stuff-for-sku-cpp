#include <iostream>
#include <cmath>
using namespace std;
int a,b,c; //Set variables
int main(){
	cout <<"Enter three marks : ";
	cin >> a >> b >> c;
	if(a > 100 || b > 100 || c > 100){
		cout <<"Number over 100 is not allowed";
	}
	else if(a < 0 || b < 0|| c < 0){
		cout<<"Number smaller than 0 is not allowed";
	}
	else if (a > b and b > c){
		cout <<"\nRank 1: " << a;
	    cout <<"\nRank 2: " << b;
	    cout <<"\nRank 3: " << c;
	}
	else if (a > c and c > b){
	    cout <<"\nRank 1: " << a;
	    cout <<"\nRank 2: " << c;
	    cout <<"\nRank 3: " << b;
	}
	else if (b > a and a > c){
		cout <<"\nRank 1: " << b;
	    cout <<"\nRank 2: " << a;
	    cout <<"\nRank 3: " << c;
	}
	else if(b > c and c > a){
		cout <<"\nRank 1: " << b;
	    cout <<"\nRank 2: " << c;
	    cout <<"\nRank 3: " << a;
	}
	else if(c > b and b > a){
		cout <<"\nRank 1: " << c;
	    cout <<"\nRank 2: " << b;
	    cout <<"\nRank 3: " << a;
	}
	else if(c > a and a > b){
		cout <<"\nRank 1: " << c;
	    cout <<"\nRank 2: " << a;
	    cout <<"\nRank 3: " << b;
	}
	else if(a == b and b == c){
		cout <<"\nRank 1: " << a;
	}
	else if(a == b){
		cout <<"\nRank 1: " << max(a,c);
		cout <<"\nRank 2: " << min(a,c);
	}
	else if(a == c){
		cout <<"\nRank 1: " << max(a,b);
		cout <<"\nRank 2: " << min(a,b);
	}
	else if(b == c){
		cout <<"\nRank 1: " << max(a,c);
		cout <<"\nRank 2: " << min(a,c);
	}
 }