// cale.h
#pragma once

#ifndef M_PI // ���� ���� ���� �ʾ�����...
#define M_PI 3.14159265358979323846 // �����ϱ�
#endif

#ifndef MATH_FUNC_H
#define MATH_FUNC_H


// �Լ� ���� �����ϱ�
double sum(double value1, double value2);
double sub(double value1, double value2);
double mul(double value1, double value2);
double div(double value1, double value2);
int rem(int value1, int value2);

// �߰� �Լ�
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);

#endif