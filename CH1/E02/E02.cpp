#include <stdio.h>

int main()
{
	int a,b,c, sum,avg,min,max;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	printf("%d %d %d %d",sum,avg,min,max);
}