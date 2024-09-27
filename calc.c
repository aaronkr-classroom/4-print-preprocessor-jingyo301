// calc.c
#include <stdio.h>
//#include <math.h> // M_PI�� ���⿡ �־�� ������ ������
#include "calc.h" // ���� ���� .h ������ include�� �� ū ����ǥ("")�� ����ؾ� ��


	// ���ϱ�
	double sum(double value1, double value2) {
		return value1 + value2;
	}
	// ����
	double sub(double value1, double value2) {
		return value1 - value2;
	}
	// ���ϱ�
	double mul(double value1, double value2) {
		return value1 * value2;
	}
	// ������
	double div(double value1, double value2) {
		if (value2 != 0)
			return value1 / value2;
		else {
			printf("Error : Divide by 0!");
			return 0;
		}
	}
	// ������
	int rem(int value1, int value2) {
		if (value2 != 0)
			return value1 % value2;
		else {
			printf("Error : Divide by 0!");
			return 0;
		}
	}

	// ����
	double power(double base, double exponent) {
		return pow(base, exponent); // pow() �Լ�??
	}

	// ������
	double squareRoot(double num) {
		if (num >= 0)
			return sqrt(num); // math.h���� �ִ� sqrt() �Լ�
		else {

			printf("Error : Megetive number!");
			return -1;
		}
	}

	// ����
	double areaOfCircle(double radius) {
		return M_PI * radius * radius; // M_PI ����
	}

	// �ѷ�
	double circumferenceOfCircle(double radius) {
		return 2 * M_PI * radius;
	}