//Project Euler: Problem 15
//Findet Anzahl wege durch NxN Gitter
#include <iostream>
#include <vector>
#include <stdio.h>

typedef long int2;

void printCache(std::vector<std::vector<int2> >& cache){
	std::cout << std::endl << std::endl;
	for(std::vector<std::vector<int2> >::size_type x=0; x<cache.size(); ++x){
		for(std::vector<int2>::size_type y=0; y<cache[x].size(); ++y)
			std::cout << cache[x][y] << " ";
		std::cout << std::endl;
	}
}

int2 getCache(std::vector<std::vector<int2> >& cache, int x, int y){
	if(cache[y][x]!=0)
		cache[x][y]=cache[y][x];
	if(cache[x][y]==0){
		cache[x+1][y] = getCache(cache,x+1,y);
		cache[x][y+1] = getCache(cache,x,y+1);
		cache[x][y] = cache[x][y+1] + cache[x+1][y];
	}
	if(cache[y][x]==0)
		cache[y][x]=cache[x][y];
	return cache[x][y];
}

int main(int argc, char** argv){
	int latsize;
	sscanf(argv[1],"%d",&latsize);
	std::vector<std::vector<int2> > cache(latsize+1, std::vector<int2>(latsize+1) );
	
	for(int i=0; i<=latsize; ++i)
		for(int j=0; j<=latsize; ++j)
			if(j==latsize||i==latsize)
				cache[i][j]=1;

	std::cout << getCache(cache, 0,0) << std::endl;

}