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
	 sinus = degreemath::sin(45.0);
	 cosinus = degreemath::cos(45.0);
	 tangens = degreemath::tg(45.0);
	 cotangens = degreemath::ctg(45.0);
#else
	sinus = std::sin(PI/4);
	cosinus = std::cos(PI/4);
	tangens = std::tan(PI/4);
	cotangens = 1/std::tan(PI/4);
#endif

	std::cout << sinus << std :: endl;

	return 0;
}
