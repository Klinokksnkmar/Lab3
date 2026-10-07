#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define D_PULGADA 2.32166

void zadanie1() 
{
	int num1;

	puts("введите число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);

	int num2;
	puts("Ввведите второе число");
	scanf("%d", &num2);

	printf("Сумма:%d\n", num1 + num2);
	printf("Разность:%d\n", num1 - num2);
	printf("Произведение:%d\n", num1 * num2);
	printf("Частное:%d\n", num2 / num1);
	printf("Остаток:%d\n", num2 % num1);
}

void zadanie2()
{
	int dym;
	float result;

	puts("Введите количество дюймов");
	scanf("%d", &dym);

	result = D * dym;

	printf("%d дюймов - это %.1f см\n", dym, result);
	printf("%d испанских дюймов - это %.2f см\n", dym, D_PULGADA * dym);
}

void zadanie3()

{
	int A, B;
	printf("Введите значение числа A");
	scanf("%d", &A);
	printf("Введите значение числа B");
	scanf("%d", &B);

	printf("________________________________________________________________\n");
	printf("|%14s         |%14s         |%14s         |\n", "a*b", "a+b", "a-b");
	printf("________________________________________________________________\n");
	printf("|%7d*%1d       |%9d+%1d       |%9d-%1d       |\n", A, B, A, B, A, B);
	printf("________________________________________________________________\n");
	printf("|%13d         |%13d         |%13d         |\n", A * B, A + B, A - B);
	printf("________________________________________________________________\n");
} 


int main()
{
	setlocale(LC_CTYPE, "RUS");
	zadanie1();
	zadanie2();
	zadanie3();
    system("pause");
	return 0;
}

