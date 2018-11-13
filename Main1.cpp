#define _CRT_SECURE_NO_WARNINGS   // убирает предупреждение о scanf
#include <stdio.h>
#include "task1.h"

int main()
{
	unsigned int minutes = 0; //нужен 0 дл€ scanf если не ввести , то при вводе ерунды (букв например), то он находит слу€айное число и с ним работает
	printf("Enter minutes:");
	scanf("%u", &minutes); // нужно указать формат %u читает  целое число без знака + или - , далее адрес куда положить данные scanf требует адрес
	printf("Time: %u hours and %u minutes\n", getHours(minutes), getMinutes(minutes)); //функции getHours и getMinutes определены в загодловном файле task.1  и там описано ,что должна делать функции(как считать часы)
	return 0;
}