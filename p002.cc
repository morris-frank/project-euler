//Project Euler: Problem 2
//Bildet die Summe aller Fibonacci Zahlen
//kleiner max
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int max = 4000000;
	int f0 = 0;
	int f1 = 1;
	int helper;
	int sum = 0;
	while (f1<max){
		if (f1%2==0)
		{
			sum += f1;
		}
		helper=f1;
		f1+=f0;
		f0=helper;
	}
	printf("%ld\n", sum);
	return 0;
}