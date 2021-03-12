#include<LaborkaConfig.h>
#define PI 3.14159265359
#ifdef USE_TRIGONOMETRY_DEGREE
#include<trygonometria.h>
#else
#include<cmath>
#endif
#include <iostream>

int main() {
	double sinus;
	double cosinus;
	double tangens;
	double cotangens;

#ifdef USE_TRIGONOMETRY_DEGREE
	 sinus = degreemath::sin(30.0);
	 cosinus = degreemath::cos(30.0);
	 tangens = degreemath::tg(30.0);
	 cotangens = degreemath::ctg(30.0);
#else
	sinus = std::sin(PI/6);
	cosinus = std::cos(PI/6);
	tangens = std::tan(PI/6);
	cotangens = 1/std::tan(PI/6);
#endif

	std::cout << sinus << std :: endl;

	return 0;
}
