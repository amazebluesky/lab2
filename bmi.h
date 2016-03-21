#include <iostream>
#include <string>
class bmi 
{
	public:
	void setheight(float h);
	void setmass(float m);
	void setbmi();
	float getbmi();
	void setcategory(int i);
	std::string getcategory();
	private:
	float height;
	float mass;
	float bmi;
	std::string cat;
};

