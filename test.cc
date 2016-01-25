#include <iostream>

int main(){
	int N = 10;
	int arr[N][N];

	for(int i=0; i<N; ++i)
		arr[i][N] = N;

	for(int i=0; i<N; ++i)
		std::cout << arr[i][N] << std::endl;
}