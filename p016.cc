//Project Euler: Problem 16
//Berechnet Quersumme von 2^1000
#include <iostream>

int main(){
	// Betrachte 2^1000
	int maxPot = 500;
	int Pot = 1000;

	long int result=0;
	int Summanten[maxPot]={0};
	int intI=maxPot-1;
	Summanten[0]=2;
	for (int i = 0; i < (Pot-1); ++i)
	{
		intI=maxPot-1;
		while(Summanten[intI]==0)
			intI--;
		for (int j = intI+1; j >= 0; --j)
		{
			Summanten[j]*=2;
			if (Summanten[j]>9)
			{
				
				Summanten[j+1]+=(Summanten[j]/10);
				Summanten[j]-=10*(Summanten[j]/10);
			}
		}
	}

	intI = maxPot-1;
	while(Summanten[intI]==0)
		intI--;
	for (int i = intI; i >= 0; --i)
		result+=Summanten[i];
	std::cout << result << std::endl;
}