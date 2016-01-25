//Project Euler: Problem 31
//Wie viele Möglichkeiten gibt es input als Münzgeld darzustellen?
#include <iostream>
#include <stdio.h>

int nennwert[8] = {1,2,5,10,20,50,100,200};

int wg(int betrag, int muenzarten){
	if(betrag==0) return 1;
	if (betrag<0 || muenzarten==0) return 0;
	return wg(betrag, muenzarten-1)+wg(betrag-nennwert[muenzarten-1],muenzarten);
}

int wechselgeld(int betrag){
	return wg(betrag,8);
}

int main(int argc, char** argv){
	int input;
	sscanf(argv[1],"%d",&input);
	std::cout << wechselgeld(input) << std::endl;
}