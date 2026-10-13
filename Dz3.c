#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> //для system("pause")

int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("25 номер\n");

	double s;  //длина ребра 
	double ploschad; //площадь
	double obiem; //объём

	printf("Введите длину ребра тетраэдра S");
	scanf("%lf", &s);

	ploschad = sqrt(3.0) * s * s;
	obiem = ( (s* s * s) / 6.0* sqrt(2.0));

	printf("Площадь поверхности тетраэдра: %.2lf\n", ploschad);
	printf("Объем:%.2lf\n",obiem);
	 
	system("pause");
	return 0;
}
