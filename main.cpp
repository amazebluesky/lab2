#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "bmi.h"
using namespace std;
int main()
{
	bmi bmi1 ;
	int i;
	float hei ,ma;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	if(!inFile){
		cerr<<"failed opening"<<endl;
		exit(1);
	}
		while(inFile>>hei>>ma &&hei!=0 && ma!=0){
			bmi1.setheight(hei);
			bmi1.setmass(ma);
			bmi1.setbmi();
			bmi1.setcategory(i);
			outFile<<bmi1.getbmi()<<"\t"<<bmi1.getcategory()<<endl;
			}
		return 0;	
	}
