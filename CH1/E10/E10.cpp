#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string"

using namespace std;

int getdays(int m)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return 28;
	}
}

void print_weekday(int m, int d, int wd)
{
	int w=(wd - 1) % 7 + 2;
	switch (w)
	{
	case 1:
		printf("2013��%d��%d��������һ", m, d); break;
	case 2:
		printf("2013��%d��%d�������ڶ�", m, d); break;
	case 3:
		printf("2013��%d��%d����������", m, d); break;
	case 4:
		printf("2013��%d��%d����������", m, d); break;
	case 5:
		printf("2013��%d��%d����������", m, d); break;
	case 6:
		printf("2013��%d��%d����������", m, d); break;
	case 7:
		printf("2013��%d��%d����������", m, d); break;
	}
}

int main()
{
	int m, d, total_days=0;
	printf("�����������е������죬�Կո�Ϊ�����");
	scanf("%d %d", &m, &d);
	if (m == 1) print_weekday(m, d, d);
	else
	{
		for (int i = 1; i < m; i++) total_days += getdays(i);
		total_days += d;
		print_weekday(m, d, total_days);
	}

}