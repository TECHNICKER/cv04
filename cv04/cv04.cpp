#include "cv04.h"

/*
int isLeapYear(int year)
{
	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	int array[6] = {1000, 2000, 2002, 2012, 2022, 2200};

	for (int i = 0; i < 6; i++)
	{
		printf("%d %d\n", array[i], isLeapYear(array[i]));
	}

	return 0;
}*/


double factorial(double operand)
{
	double vysledek = operand;

	for (int i = 1; i <= operand; i++)
	{
		vysledek = vysledek * i;
	}

	return vysledek;
}

int main()
{
	double operand = 0;

	while (1)
	{
		scanf("%lf", &operand);
		printf("%lf\n", factorial(operand));
	}

	return 0;
}