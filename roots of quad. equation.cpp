#include <iostream>
#include <cmath>
double a,b,c,x1,x2;
using namespace std;
int main(){
	cout <<"****************************\n";
	cout <<"Roots of quadratic equation:\n";
	cout <<"ax^2 + bx + c = 0\n";
	cout <<"****************************\n";
	cout <<"Value of a, b and c: ";
	cin >> a >> b >> c;
	x1 = (-b - sqrt(b*b - 4*a*c))/2*a;
	x2 = (-b + sqrt(b*b - 4*a*c))/2*a;
	cout <<"\nRoot 1 is :" << x1;
	cout <<"\nRoot 2 is :" << x2;
}