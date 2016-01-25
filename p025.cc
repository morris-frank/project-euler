//Project Euler: Problem 25
//Sucht erste Fibonacci Zahl mit mehr als input Stellen
#include <iostream>
#include <vector>
#include <stdio.h>
#include "euler1.h"

int main(int argc, char** argv){
	int input;
	sscanf(argv[1],"%d",&input);
	std::vector<int> FibHelp1(1,1);
	std::vector<int> FibHelp2(1,1);
	std::vector<int> Fibo(1,0);

	long zaehler = 2;

	while(Fibo.size()<input){
		Fibo = highAdd(FibHelp1,FibHelp2);
		FibHelp1 = FibHelp2;
		FibHelp2 = Fibo;
		zaehler++;
	}

	std::cout << zaehler << std::endl;
}