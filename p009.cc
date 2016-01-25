//Project Euler: Problem 9

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	for (int i = 0; i < 1000; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			for (int k = 0; k < j; ++k)
			{
				if ((i+j+k==1000)&&(j*j+k*k==i*i))
				{
					cout << (i*j*k) << endl;
				}
			}
		}
	}
}