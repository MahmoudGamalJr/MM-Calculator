/**
* Name : MM Caluclator
* Programmer : Mahmoud Gamal,Mostafa Gamal
* Date : 2020-03-12
* For : Luxor Students Competition (All levels and NOT individual)
**/
#ifndef MAIN_H
	#define MAIN_H

	#include <iostream>
	#include <cmath>
	#include <inttypes.h>
	
	using namespace std;

	void 	Addition();
	void 	Subtraction();
	void 	Division();
	void 	Multiplication();
	void 	Exponentiation();
	void 	SquareRoot();
	void 	Sine();
	void 	Cosine();
	void 	Tangent();
	void 	help();
	void 	error();

	float 	degree2Radian(float degree);
	float 	implementationPower(float base, int power);
	int64_t implementationFactorial(int number);
	float 	implementationSine(float degree);
	float 	implementationCosine(float degree);

#endif
