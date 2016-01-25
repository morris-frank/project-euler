//Project Euler: Problem 22
//Berechnet Summe der Name Scores von Namen in p022_names.txt
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int alphValue(string name){
	int score=0;
	for(std::string::iterator it = name.begin(); it != name.end(); ++it)
		score += (*it+1-'A');
	return score;
}

int main(){
	ifstream nameFile("p022_names.txt");
	char c;
	vector<string> names;	
	
	bool atStart = false;
	string transName;
	int NameNr = -1;
	while(nameFile>>c)
		if(c!=',')
			if(c=='"')
				atStart=true;
			else
				if(atStart){
					++NameNr;
					atStart=false;
					names.push_back(string(1,c));
				}else
					names[NameNr]+=c;

	nameFile.close();
	sort(names.begin(),names.end());
	int nr = 1;
	int fullscore=0;
	for (vector<string >::iterator it = names.begin(); it!=names.end(); ++it, ++nr)
		fullscore += nr*alphValue(*it);
	std::cout << fullscore << std::endl;
}
