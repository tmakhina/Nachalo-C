#include "task1.h"   // ���������� ������������ ���� ,������� �� ������� 

//static const unsigned int MinPerHour = 60; ��� ���������� ��������� ,��� � ����� ���� 60 ����� , static ��������� ������� ��������� ���������� ������ ������� � ������ ����� 

unsigned int getHours(unsigned int minutes)  // ���������� �������
{
	
	return minutes / 60;    //����� �������� minutes /  MinPerHour
}
unsigned int getMinutes(unsigned int minutes)  // ���������� �������
{
	return minutes % 60;   // ����� �������� minutes / MinPerHour
}