
#include "pch.h"
#include "Header.h"

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mult(int a, int b)
{
	return a * b;
}

float Div(float a, float b)
{
	return a / b; 
}

int Pow(int a, int b)
{
	if (b == 0)
		return 1;
	else 
		return a * Pow(a, b - 1);
}

int Fact(int a)
{
	if (a == 0)
		return 1;
	else
		return a * Fact(a - 1);
}