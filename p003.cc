//Project Euler: Problem 3
//Sucht größten Primfaktor von x
#include <iostream>
#include <stdio.h>

int main()
{
	long x = 600851475143;
	long divi = 2;

	while(x>divi){
		if(x%divi==0){
			x /= divi;
			divi = 2;
		}else{
			divi++;
		}
	}
	std::cout << divi << std::endl;
}