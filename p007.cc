//Project Euler: Problem 7
#include <iostream>
#include <stdio.h>

long isPrime(long x)
{
	long start = (x%2==0) ? (x/2) : ((x-1)/2);
	for (int i = 2; i <= start; ++i)
	{
		if (start%i==0)
		{
			return false;
		}
	}
	return true;
}

int main(){
	
}