#include <iostream>
#include <cmath>
#include "bmi.h"
#include <string>
void bmi::setheight(float h){
		height=h;
	}
void bmi::setmass(float m){
		mass=m;
	}
void bmi::setbmi(){
		bmi=mass/pow(height/100.0,2);
}
float bmi::getbmi(){
		return bmi;		
	}
void bmi::setcategory(int i){
		for(i=1;i<6;i++){
			if(getbmi()<15.0){
				cat="Very severely underweight";
			}
			if(getbmi()>=15.0 && getbmi()<16.0){
				cat="Severely underweight";
			}
			if(getbmi()>=16.0 && getbmi()<18.5){
				cat="Underweight";
			}
			if(getbmi()>=18.5 && getbmi()<25.0){
				cat="Normal";			
			}
			if(getbmi()>=25.0 && getbmi()<30.0){
				cat="Overweight";		
			}
			if(getbmi()>=30.0 && getbmi()<35.0){
				cat="Obese Class I (Moderately obese)";
			}
			if(getbmi()>=35.0 && getbmi()<40.0){
				cat="Obese Class II (Severely obese)";			
			}
			if(getbmi()>=40.0){
				cat="Obese Class III (Very severely obese)";	
			}
}			
}
std::string bmi::getcategory(){
		return cat;
}
