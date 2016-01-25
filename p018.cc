//Project Euler: Problem 18
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void mprint(std::vector<int> &mat, int ls, int ls2){
	for(int x=0;x<ls;++x)
		for(int y=0;y<=x;++y)
			std::cout<<(y==0?"\n":" ")<<mat[x*ls2+y];
	std::cout<<std::endl;
}

int main(){
	int ls = 15;

	std::ifstream inputstr;
	char inputchar;
	int line_nr = 0;
	int number_nr = 0;
	bool inNumber=false;
	std::vector<int> inmat(ls*ls);


	inputstr.open("p018_input.txt");

	while(inputstr.get(inputchar)){
		if(inputchar==32){
			number_nr++;
		}else if(inputchar==10){
			line_nr++;
			number_nr=0;
		}else{
			if(inNumber){
				inmat[line_nr*ls+number_nr] += inputchar-'0';
			}else{
				inmat[line_nr*ls+number_nr] = 10*(inputchar-'0');
			}
			inNumber=!inNumber;
		}
	}
	inputstr.close();


	for(int line=ls-2;line!=0;--line){
		for(int pnt=0; pnt<=line;++pnt)
			inmat[line*ls+pnt] += (inmat[(line+1)*ls+pnt]>inmat[(line+1)*ls+pnt+1] ? inmat[(line+1)*ls+pnt] :inmat[(line+1)*ls+pnt+1]);
		mprint(inmat,line+1,ls);
	}

}