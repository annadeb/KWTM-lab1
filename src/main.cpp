#include<LaborkaConfig.h>

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
	sinus = std::sin(pi/6);
	cosinus = std::cos(pi/6);
	tangens = std::tg(pi/6);
	cotangens = 1/std::tg(pi/6);
#endif

	std::cout << sinus << std :: endl;

	return 0;
}
