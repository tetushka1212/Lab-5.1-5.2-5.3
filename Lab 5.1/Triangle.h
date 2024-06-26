#pragma once
#include <iostream>
#include<cmath>
using namespace std;
class Triangle
{
private:
	int side1, side2, side3;
public:
	Triangle(int s1,int s2, int s3)
	{
		this->side1 = s1;
		this->side2 = s2;
		this->side3 = s3;
		if (!Valid()) {
			throw string{ "Impossible triangle" };
		}
	}
	bool Valid() { return (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2); }
	double Area() { 
		double s = (side1 + side2 + side3) / 2.0;
		return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
	}
};

