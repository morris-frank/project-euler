//Project Euler: Problem 102
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

long seite( int* pnkt1, int* pnkt2 ){
	return -pnkt1[0]*(pnkt2[1]-pnkt1[1])-pnkt1[1]*(pnkt1[0]-pnkt2[0]);
}

bool zero_in_tri( int* tri ){
	//std::cout<<seite(tri+0,tri+2)<<"|"<<seite(tri+2,tri+4)<<"|"<<seite(tri+4,tri+0)<<"|"<<std::endl;
	long s1 = seite(tri+0,tri+2);
	long s2 = seite(tri+2,tri+4);
	long s3 = seite(tri+4,tri+0);
	return ( (s1<=0)&&(s2<=0)&&(s3<=0) ) || ( (s1>0)&&(s2>0)&&(s3>0) );
}

int main(){
	std::ifstream inputstream("p102_triangles.txt");
	std::string line;
	int completeitt;
	int i = 0;
	while(getline(inputstream,line)){
		std::string cell;
		std::stringstream linestream(line);
		int triangle [6];
		for(int tri_it=0; tri_it<6; ++tri_it){
			getline(linestream,cell,',');
			triangle[tri_it] = std::stoi(cell);
		}
		completeitt += zero_in_tri(triangle);
		std::cout<<++i<<" "<<zero_in_tri(triangle)<<std::endl;
	}
	std::cout << completeitt << std::endl;
}