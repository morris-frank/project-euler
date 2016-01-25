//Project Euler: Problem 1
//Berechnet die Summe aller Vielfachen von 3 und 5 kleiner 1000
#include<iostream>
#include<stdio.h>

int sumofMulti(int n){
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		if (i%3==0||i%5==0)
		{	
			sum+=i;
		}
	}
	return sum;
}

int main ()
{
	printf("Das Ergebnis ist: %ld\n", sumofMulti(1000));
	return 0;
}