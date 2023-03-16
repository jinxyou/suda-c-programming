/**
程序描述:设计一个表示日期的结构体。编写一个函数，计算两个日期之间差多少天。在 main 函数 中调用该函数，并显示。
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
    //计算公元1年1月1日到某年的1月1号的天数
    for (i = 1, sum = 0; i < date->year; i++) {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            sum += LEAP_YEAR;
        else
            sum += COMMON_YEAR;
    }
    //计算该年的1月1号到该日期的天数
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
    printf("请输入第一个日期YYYY-MM-DD: ");
    scanf("%d-%d-%d", &date1.year, &date1.month, &date1.day);
    if (date1.year <= 0 || date1.month <= 0 || date1.month > 12 || date1.day <= 0 || date1.day > 31)
    {
        printf("输入错误,请准确输入日期!\n");
        exit(-1);
    }
    printf("请输入第二个日期YYYY-MM-DD: ");
    scanf("%d-%d-%d", &date2.year, &date2.month, &date2.day);
    if (date2.year < 0 || date2.month < 0 || date2.month>12 || date2.day < 0 || date2.day>31)
    {
        printf("输入错误,请准确输入日期!\n");
        exit(-1);
    }
    //算法思路:我们以公元1年1月1日为基准,分别计算间隔天数,然后两者相减就是这两个日期的间隔天数了
    sum1 = sum_days(&date1);
    sum2 = sum_days(&date2);
    result = abs(sum1 - sum2);
    printf("日期之差为: %d\n", result);
}



int main()
{
    interval_days();
    return 0;
}