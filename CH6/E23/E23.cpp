#include<stdio.h>
#include<algorithm>

int main()
{
	int x[]={35,46,57,13,24,35,99,68,13,79,88,46};
	int len=sizeof(x)/sizeof(int);
	int i,j,t;
	for(j=0;j<len-1;j++)
	{
		for(i=0;i<len-1-j;i++)
		{
			if(x[i]>x[i+1])
			{
				t=x[i];
				x[i]=x[i+1];
				x[i+1]=t;
			}
		}
	}
	printf("%d ",x[0]);
	for(i=1;i<len;i++)
	{
		if(x[i]!=x[i-1])
			printf("%d ",x[i]);
	}
	printf("\n");
	return 0;
}
