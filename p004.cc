//Project Euler: Problem 4
//Sucht größtes Palindrom zweier Zahlen i,j < 999
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

bool isPalidrome(int x){
	std::string test;
	std::stringstream convert;
	convert << x;
	test = convert.str();
	return (test == std::string(test.rbegin(), test.rend())) ? true : false;
}

int main(){
	int result;
	for (int i = 999; i > 0; --i)
	{
		for (int j = i; j > 0; --j)
		{
			result = (isPalidrome(i*j) && i*j>result) ? (i*j) : result;
		}
	}
	std::cout << result << std::endl;
}