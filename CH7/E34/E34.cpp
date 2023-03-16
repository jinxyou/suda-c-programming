#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	int n, i;
	printf("请输入一个数字：");
	scanf("%s", &s);
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] < 48 || s[i]>57)
		{
			printf("字符串不合法！");
			break;
		}
	}
	if (i == strlen(s))
	{
		n = atoi(s);
		printf("结果：%d", n);
	}

}