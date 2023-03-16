#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void sort(int a[], int n) //对数组进行排序 从小到大排序
{
	int i;
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void fun(char a[])
{
	int num[5]; //存储每位上的数字。
	int i;
	for (i = 0; i < strlen(a); i++) //将字符转换为数字。
	{
		num[i] = a[i] - '0'; //这是借助ascii码进行的转换。
	}
	sort(num, 5);
	//输出最大值
	printf("max=");
	for (i = 4; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	int flag = 1; //从小往大找，找第一个不为零的最小值。
	printf("\nmin=");
	for (i = 0; i < 5; i++)
	{
		if (num[i] != 0 && flag)
		{
			printf("%d", num[i]);
			int j;
			for (j = 0; j < i; j++)
			{
				printf("%d", num[j]); //也就是所谓的0.
			}
			flag = 0; //找到后标志归零。
		}
		else if (!flag)
		{
			printf("%d", num[i]);
		}
	}
}
int main()
{
	char a[6];
	gets_s(a); //输入5个字符回车结束
	fun(a);
	return 0;
}