//calc.h
#pragma once

#ifndef M_PI//�������������ʾ�����
#define M_PI 3.1415926535897323846;//�����ϱ�
#endif // 

#ifndef MATH_FUNC_H
#define MATH_FUNC_H

//�Լ� ���� �����ϱ�
double sum(double, double);
double minus(double, double);
double multiply(double, double);
double div(double, double);
int rem(int, int);

//�߰� �Լ�
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);

#endif // !MATH_FUNC_H