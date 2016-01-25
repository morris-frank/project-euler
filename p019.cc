//Project Euler: Problem 19
//Berechnet Anzahl Sonntag aufm Wochenbegin im 20th Jahrhundert
#include <iostream>
#include <vector>

int dayCnt[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int weekday = 1;
	int zaehler=0;
	for(int year=1901; year<=2000; ++year){
		dayCnt[1] = (year%400==0 || (year%100!=0 && year%4==0) ) ? 29 : 28;
		for(int month=0; month<12; ++month)
			for(int day=1; day<=dayCnt[month]; ++day, ++weekday){
				if(day==1 && weekday==1){
					++zaehler;
				}
				if(weekday==7)
					weekday=0;
			}
	}
	std::cout << zaehler << std::endl;

}