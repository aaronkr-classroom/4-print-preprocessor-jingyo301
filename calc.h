// cale.h
#pragma once

#ifndef M_PI // 아직 정의 하지 않았으면...
#define M_PI 3.14159265358979323846 // 정의하기
#endif

#ifndef MATH_FUNC_H
#define MATH_FUNC_H


// 함수 원형 선언하기
double sum(double value1, double value2);
double sub(double value1, double value2);
double mul(double value1, double value2);
double div(double value1, double value2);
int rem(int value1, int value2);

// 추가 함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);

#endif