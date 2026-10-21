#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

int task1();

int main()
{
	setlocale(LC_ALL, "RUS");

	task1();

	return 0;
}

int task1()
{
	//Вариант 14. Калибровка станка

	//Объявление переменных
	int A, B, C;
	int condition;

	//Ввод данных пользователем
	printf("Введите значения трёх параметров A, B, C ");
	scanf("%d %d %d", &A, &B, &C);

	//Проверка условия: каждое из значений кратно трём
	condition = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

	//Вывод результата
	printf("Условие выполнено (1 - да, 0 - нет) %d", condition);

	return 0;
}
