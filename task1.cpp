#include "task1.h"   // подключаем заголовочный файл ,который мы создали 

//static const unsigned int MinPerHour = 60; это объ€вление константы ,что в одном часе 60 минут , static блокирует область видимости переменную нельз€ вызвать в другом файле 

unsigned int getHours(unsigned int minutes)  // объ€вление функции
{
	
	return minutes / 60;    //можно написать minutes /  MinPerHour
}
unsigned int getMinutes(unsigned int minutes)  // объ€вление функции
{
	return minutes % 60;   // можно написать minutes / MinPerHour
}