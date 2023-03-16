#include <stdio.h>

int main()
{
	int n,n1,n2,n3,s;
	printf("请输入一个三位正整数:");
	scanf("%d", &n);
	n1=n/100;
	n2=n/10%10;
	n3=n%10;
	s=n1+n2+n3;
	printf("它们的和:%d",s);
}