//Project Euler: Problem 44
//Findet die minimierte Differenz der Pentagon Nummern
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

vector<long> numbers;

void push(){
	if(numbers.empty())
		numbers.push_back(1);
	else
		numbers.push_back( (numbers.size() + 1) * (3 * (numbers.size()+1) - 1) /2 );
}

bool isPentagon(int test){
	return find(numbers.begin(),numbers.end(),test) != numbers.end());
}


int main(){
	push();
	int x = 0;
	int y = 1800; // Startwert, Risky!!!!
	while(numbers.size()<=y)
		push();
	while(!isPentagon(abs(numbers[y]-numbers[x])) || !isPentagon(numbers[y]+numbers[x])){
		++x;
		if(x>=y){
			push();
			x=0;
			++y;
		}
		while(numbers[y]+numbers[x] > numbers.back())
			push();
	}
	cout << abs(numbers[x]-numbers[y]) << endl;

}
