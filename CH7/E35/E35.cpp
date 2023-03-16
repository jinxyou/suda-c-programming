#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	int n;
	printf("请输入一个数字：");
	scanf("%d", &n);
	_itoa(n,s,2);
	printf("%s", s);
}