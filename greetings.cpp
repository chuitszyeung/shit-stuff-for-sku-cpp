#include <iostream>
#include <cmath>
#include <string>
int verb,obj1,obj2,greet,randnum;
using namespace std;
int main(){
	string v,o1,o2,g;
	srand(time(NULL));
	verb = rand() % 3+1;
	obj1 = rand() % 5+1;
	obj2 = rand() % 5+1;
	greet = rand() % 4+1;
	switch (greet) {
		case 1:
		g = "Hi!";
		break;
		case 2:
		g = "Hello how are you?";
		break;
		case 3:
		g = "Nice to meet you there!";
		break;
		default:
		g = "How are you doing?";
	}
	switch (verb){
		case 1:
		v = " bitting";
		break;
		case 2:
		v = " playing with";
		break;
		default:
		v = " watching at";
	}
	switch (obj1){
		case 1:
		o1 = " a cat";
		break;
		case 2:
		o1 = " a dog";
		break;
		case 3:
		o1 = " a fish";
		break;
		case 4:
		o1 = " a flower";
		break;
		default:
		o1 = " a bird";
	}
	switch (obj2){
		case 1:
		o2 = " a cat";
		break;
		case 2:
		o2 = " a dog";
		break;
		case 3:
		o2 = " a fish";
		break;
		case 4:
		o2 = " a flower";
		break;
		default:
		o2 = " a bird";
	}
	cout << g;
	cout << "\n";
	cout << "Yesterday, I saw" << o1 << v << o2 << ".";
}