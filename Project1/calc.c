//calc.c
#include <stdio.h>
//#include <math.h>
#include "calc.h"

//���ϱ�
double sum(double value1, double value2) {
	return value1 + value2;
}
//����
double minus(double value1, double value2) {
	return value1 - value2;
}
//���ϱ�
double multiply(double value1, double value2) {
	return value1 * value2;
}
//������
double div(double value1, double value2) {
	if(value2 !=0)
		return value1 / value2;
	else
	{
		printf("ERROR\n");
		return 0;
	}
}

//������
int rem(int value1, int value2) {
	if(value2 !=0) 
		return value1 % value2;
	else
	{
		printf("ERROR\n");
		return 0;
	}
}

//����
double power(double base, double exponent) {
	return pow(base, exponent);// pow()�Լ� >> math.h
}

//������
double squareRoot(double num) {
	if(num>=0)
		return sqrt(num);// sqrt() >>math.h
	else
	{
		printf("ERROR\n");
	}
}

//����
double areaOfCircle(double radius) {
	return radius * radius * M_PI; //M_PI�����ؾ���
}

//�ѷ�
double circumferenceOfCircle(double radius) {
	return 2 * radius*M_PI;
}