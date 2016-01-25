//Project Euler: Problem 14
#include <iostream>
#include <algorithm>

int main(){
	int sup = 1000000;
	int cache[sup+1];
	int maxN=0;
	int highStart=0;
	for(int i=0; i<=sup; i++)
		cache[i]=-1;
	cache[1]=1;
	long work;
	for(int i=2;i<sup;i++){

		work=i;
		int N=0;
		while(work!=1 && work>=i){
			work = work%2==0 ? work/2 : 3*work+1;
			N++;
		}
		cache[i]=N+cache[work];
		if(cache[i]>maxN){
			maxN=cache[i];
			highStart=i;
		}
	}

	std::cout << maxN << ": " << highStart << std::endl;
}