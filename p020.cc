//Project Euler: Problem 20
//Berechnet Quersumme großer Fakultaeten
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

//Gibt Vektor mit Fakultaet zurueck. Jedes Element eine Ziffer, erstes Element hoechste Ziffer.
std::vector<int> highFak(int Fak){
	std::vector<int> FakArray(1,0);
	FakArray[0]=1;
	for (int i = 1; i <= Fak; ++i)
		for (int j = FakArray.size(); j >= 0; --j)
		{
			FakArray[j]*=i;
			int j_=j;
			while(FakArray[j_]>9)
			{
				if(FakArray.size()<=j_+1)
					FakArray.push_back(0);
				FakArray[j_+1]+=(FakArray[j_]/10);
				FakArray[j_]-=10*(FakArray[j_]/10);
				j_++;
			}
		}
	std::reverse(FakArray.begin(),FakArray.end());
	return FakArray;
}

//Gibt Summe aller Elemente eines int-Vektors zurueck
long long int sumFromVec(std::vector<int> aim){
	long long result=0;
	for (int i = 0; i < aim.size(); ++i)
		result+=aim[i];
	return result;
}

int main (int argc, char** argv){
	int input;
	sscanf(argv[1],"%d",&input);
	std::vector<int> Fak = highFak(input);
	for (std::vector<int>::iterator it=Fak.begin(); it!=Fak.end(); ++it)
   	std::cout << *it;
	std::cout << std::endl << std::endl;
	std::cout << "Quersumme: " << sumFromVec(Fak) << std::endl;
}