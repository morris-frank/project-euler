//Project Euler: Problem 13
//Gibt erste 10 Stellen des Produkts aller Zahlen in p13_input.txt aus
#include <iostream>
#include <fstream>
#include <vector>
#include "euler1.h"

int main(){

	std::vector<int> result;

	//Begin reading FILE:
	std::ifstream iFile("p013_input.txt");
   std::string line;
   std::vector<std::vector<int> > v;
   //Loop through lines
   while(std::getline(iFile, line)) {
   	std::vector<int> lineVec;
   	lineVec.resize(50);
      for (int i=0; i<50; ++i)
      	lineVec[i] = line[i]-48;
      v.push_back(lineVec);
   }
   iFile.close();
   //Reading file finished

   for (int i=0; i<100; ++i)
   	result = highAdd(result,v[i]);

   for (int i=0; i<10; ++i)
   	std::cout << result[i];
   std::cout << std::endl;

}