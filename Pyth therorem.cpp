#include <iostream>
#include <cmath>
double firstside,secondside,hypotenuse;
int main(){
	std::cout <<"Length of first side: ";
	std::cin >> firstside;
	if (firstside < 1)
	{
		std::cout <<"Error, only positive number should be provided";
		return 0;
	}
	std::cout << "Length of second side: ";
	std::cin >> secondside;
	if (secondside < 1)
	{
		std::cout <<"Error, only positive number should be provided";
		return 0;
	}
		hypotenuse = hypot(firstside , secondside);
	    std::cout <<"Length of hypotenuse is " << hypotenuse;
        return 0;
}