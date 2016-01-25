//Project Euler: Problem 10
//Berechnet die Summe aller Primzahlen kleiner N, implementiert Sieb des Erastothenes
#include <iostream>
#include <math.h>

int main(){
	int N = 2000000;
	int NumS = sqrt(N);
	long summe=0;
	bool Brett[N];
	for(int i=0; i<N; ++i)
		Brett[i]=true;
	for(int i=2; i<=NumS; ++i){
		if(Brett[i]){
			summe+=i;
			for(int j=i*i; j<N; j+=i)
				Brett[j]=false;
		}
	}
	for(int i=NumS+1; i<N; ++i)
		if(Brett[i])
			summe += i;
	std::cout << std::endl << summe << std::endl;
}