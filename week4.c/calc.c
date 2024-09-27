// calc.c
#include <stdio.h>
//#include <math.h> // M_PI는 여기에 있어야 하지만 없으면
#include "calc.h" // 직접 만든 .h 파일을 include할 떄 큰 따음표("")를 사용해야 됨


	// 더하기
	double sum(double value1, double value2) {
		return value1 + value2;
	}
	// 빼기
	double sub(double value1, double value2) {
		return value1 - value2;
	}
	// 곱하기
	double mul(double value1, double value2) {
		return value1 * value2;
	}
	// 나누기
	double div(double value1, double value2) {
		if (value2 != 0)
			return value1 / value2;
		else {
			printf("Error : Divide by 0!");
			return 0;
		}
	}
	// 나머지
	int rem(int value1, int value2) {
		if (value2 != 0)
			return value1 % value2;
		else {
			printf("Error : Divide by 0!");
			return 0;
		}
	}

	// 제곱
	double power(double base, double exponent) {
		return pow(base, exponent); // pow() 함수??
	}

	// 제곱근
	double squareRoot(double num) {
		if (num >= 0)
			return sqrt(num); // math.h에서 있는 sqrt() 함수
		else {

			printf("Error : Megetive number!");
			return -1;
		}
	}

	// 넓이
	double areaOfCircle(double radius) {
		return M_PI * radius * radius; // M_PI 정의
	}

	// 둘레
	double circumferenceOfCircle(double radius) {
		return 2 * M_PI * radius;
	}