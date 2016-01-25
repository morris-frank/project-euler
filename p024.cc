//Project Euler: Problem 24
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int Ziffern[] = {0,1,2,3};
	int permutCount = 24;
	std::vector<int> permut(Ziffern, Ziffern+10);


	for (std::vector<int>::iterator it=permut.begin(); it!=permut.end(); ++it)
    	std::cout << ' ' << *it;	
}