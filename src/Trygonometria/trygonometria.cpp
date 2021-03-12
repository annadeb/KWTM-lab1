#include "trygonometria.h"
#include <cmath>
#define PI 3.14159265359

double degreemath::sin(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double result = std::sin(degree*PI/180);//funkcja biblioteczna z piku <cmath>
	return result; //std::sin(radian); 
} 
double degreemath::cos(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double result = std::cos(degree * PI / 180);//funkcja biblioteczna z piku <cmath>
	return result; 
}
double degreemath::tg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double result = std::tan(degree * PI / 180);//funkcja biblioteczna z piku <cmath>
	return result; 
}
double degreemath::ctg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double result = 1/ std::tan(degree * PI / 180);//funkcja biblioteczna z piku <cmath>
	return result;
}