#define _CRT_SECURE_NO_WARNINGS   // ������� �������������� � scanf
#include <stdio.h>
#include "task1.h"

int main()
{
	unsigned int minutes = 0; //����� 0 ��� scanf ���� �� ������ , �� ��� ����� ������ (���� ��������), �� �� ������� ��������� ����� � � ��� ��������
	printf("Enter minutes:");
	scanf("%u", &minutes); // ����� ������� ������ %u ������  ����� ����� ��� ����� + ��� - , ����� ����� ���� �������� ������ scanf ������� �����
	printf("Time: %u hours and %u minutes\n", getHours(minutes), getMinutes(minutes)); //������� getHours � getMinutes ���������� � ����������� ����� task.1  � ��� ������� ,��� ������ ������ �������(��� ������� ����)
	return 0;
}