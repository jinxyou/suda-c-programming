/**
��������:���һ����ʾ���ڵĽṹ�塣��дһ��������������������֮�������졣�� main ���� �е��øú���������ʾ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LEAP_YEAR 366
#define COMMON_YEAR 365

int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

struct date
{
    int year;
    int month;
    int day;
}date1, date2;

typedef struct date DATE;

int sum_days(DATE* date)
{
    int i, sum;
    //���㹫Ԫ1��1��1�յ�ĳ���1��1�ŵ�����
    for (i = 1, sum = 0; i < date->year; i++) {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            sum += LEAP_YEAR;
        else
            sum += COMMON_YEAR;
    }
    //��������1��1�ŵ������ڵ�����
    for (i = 0; i < date->month - 1; i++) {
        sum += days[i];
    }
    if (date->month > 2 && (date->year % 400 == 0 || (date->year % 4 == 0 && date->year % 100 != 0)))
        sum += date->day + 1;
    else
        sum += date->day;
    return sum;
}

void interval_days()
{
    int i, result, sum1, sum2;
    printf("�������һ������YYYY-MM-DD: ");
    scanf("%d-%d-%d", &date1.year, &date1.month, &date1.day);
    if (date1.year <= 0 || date1.month <= 0 || date1.month > 12 || date1.day <= 0 || date1.day > 31)
    {
        printf("�������,��׼ȷ��������!\n");
        exit(-1);
    }
    printf("������ڶ�������YYYY-MM-DD: ");
    scanf("%d-%d-%d", &date2.year, &date2.month, &date2.day);
    if (date2.year < 0 || date2.month < 0 || date2.month>12 || date2.day < 0 || date2.day>31)
    {
        printf("�������,��׼ȷ��������!\n");
        exit(-1);
    }
    //�㷨˼·:�����Թ�Ԫ1��1��1��Ϊ��׼,�ֱ����������,Ȼ����������������������ڵļ��������
    sum1 = sum_days(&date1);
    sum2 = sum_days(&date2);
    result = abs(sum1 - sum2);
    printf("����֮��Ϊ: %d\n", result);
}



int main()
{
    interval_days();
    return 0;
}