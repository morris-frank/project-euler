//Project Euler: Problem 5
//Sucht kleinste Zahl die durch alle x€[1,20] teilbar ist
#include <iostream>

int main (){
	int x=20;
	while((x%20!=0) || (x%19!=0) || (x%18!=0) || (x%17!=0) || (x%16!=0) || (x%15!=0) || (x%14!=0) || (x%13!=0) || (x%12!=0) || (x%11!=0))
	{
		x++;
	}
	std::cout << x << std::endl;
}