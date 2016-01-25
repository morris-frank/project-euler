//Project Euler: Problem 12
//Berechnet die erste tringuläre Zahle mit mehr als 500 Teilern
#include <iostream>
#include <vector>
#include <math.h>

int countDivisors(long x){
	int n=1;
	int limit = x;
	for(int i=1;i<limit;++i)
		if(x%i==0){
			limit=x/i;
			n++;
		}
	return n*2;
}

int main(){
	int N=1;
	long x=1;
	int pre=0;
	while(pre<500){
		++N;
		x+=N;
		std::cout << N << ": " << pre << std::endl;
		pre=countDivisors(x);
	}
	std::cout << x << std::endl;
}