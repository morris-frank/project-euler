//Project Euler: Problem 28
#include <iostream>

int main(){
	int E1 = 1;
	int E2 = 1;
	int E3 = 1;
	int E4 = 1;
	long long sum = 1;
	for(int N=3; N<=1001; ++(++N)){
		E4 += 4*(N-1);
		E3 += 4*(N-1)-2;
		E2 += 4*(N-1)-4;
		E1 += 4*(N-1)-6;
		sum += E4+E3+E2+E1;
		std::cout<<N<<"//"<<sum<<std::endl;
	}
}