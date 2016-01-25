//Project Euler: Problem 17
#include <iostream>
//{} one two three four five six seven eight nine
int laenge1[10] = {0,3,3,5,4,4,3,5,5,4};
//ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
int laenge2[10] = {3,6,6,8,8,7,7,9,8,8};

//{} twenty thirty forty fifty sixty seventy eighty ninety
int laenge3[10] = {0,0,6,6,5,5,5,7,6,6};

int getWordLength(int x){
	int laenge=0;
	if(x/1000>0){
		laenge += laenge1[x/1000] + 8;
		if(x-1000*(x/1000)>0)
			laenge +=3;
	}
	x=x-1000*(x/1000);
	if(x/100>0){
		laenge += laenge1[x/100] + 7;
		if(x-100*(x/100)>0)
			laenge +=3;
	}
	x=x-100*(x/100);
	if(x>=10 && x<=19)
		laenge+=laenge2[x-10];
	else
		laenge += laenge3[x/10] + laenge1[x-10*(x/10)];
	return laenge;
}

int main(){
	int sum=0;
	for(int i=1;i<1000;i++)
		sum+=getWordLength(i);
	std::cout << sum << std::endl;
}