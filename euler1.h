//Header File for Project Euler
#include <vector>
#include <algorithm>

// Addiert zwei Zahlen in Morris-zertifizierter Vector Schreibweise
std::vector<int> highAdd(std::vector<int> a, std::vector<int> b){
	std::reverse(a.begin(),a.end());
	std::reverse(b.begin(),b.end());

	int sizeA = a.size();
	int sizeB = b.size();
	if (sizeA>sizeB){
		b.resize(sizeA,0);
	}else{
		a.resize(sizeB,0);
		sizeA = sizeB;
	} 

	for (int i = 0; i < sizeA; ++i)
	{
		a[i]+=b[i];
		int i_=i;
		while(a[i_]>9)
		{
			if(sizeA<=i_+1)
				a.push_back(0);
			a[i_+1] += a[i_]/10;
			a[i_]   -= a[i_]-a[i_]%10;
			i_++;
		}
	}

	std::reverse(a.begin(), a.end());
	return a;
}


bool IntVsVector(int compare, std::vector<int> elements){
	
}