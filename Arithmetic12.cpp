#include <iostream>
using namespace std;
/*
Filename:<Arithmetic12.cpp>
Author:<EARL JOHN C. DE GUZMAN>
Date:<October 21, 2024>
*/
int main () {
	const float pi=3.1416;
	float radius, area, diameter, circumference;
	cout <<"Input the radius of the Circle.. " <<endl;
	cin >> radius;
	cout <<"The radius of the circle is " <<radius <<endl;
	
	area=pi*radius*radius;
	diameter=2*radius;
	circumference=2*pi*radius;
	cout <<"The Area of the circle is " <<area <<endl;
	cout <<"The Diameter of the circle is " <<diameter <<endl;
	cout <<"The Circumference of the circle is " <<circumference <<endl;
	return 0;
}

