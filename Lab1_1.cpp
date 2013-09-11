// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <locale.h>


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,".1251");
	int counter, denominator;

	counter = 0; //Устанавливаем начальные значение
	denominator = 1;
	printf("Увеличиваем счетчик и отображаем на экране\n");
	printf("%d\n",++counter);
	printf("Вычисляем значение Counter/Denominator = ");
	printf("%d\n",counter/denominator);
	printf("%d",counter);

	getch();
	return 0;
}



