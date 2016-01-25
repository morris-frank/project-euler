//Project Euler: Problem 6
//Berechnet die Differenz des Quadrats über die Summe von 1->100
//und der Summe der Qudrate von 1->100
#include <iostream>
#include <stdio.h>

int main(){
	long int done=0;
	long int help=0;
	for (int j = 1; j <= 100; ++j)
	{
		help+=j;
	}

	for (int i = 1; i <= 100; ++i)
	{
		done+=i*help;	
		done-=i*i;
	}
	std::cout << done << std::endl;
}