#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void sort(int a[], int n) //������������� ��С��������
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
	int num[5]; //�洢ÿλ�ϵ����֡�
	int i;
	for (i = 0; i < strlen(a); i++) //���ַ�ת��Ϊ���֡�
	{
		num[i] = a[i] - '0'; //���ǽ���ascii����е�ת����
	}
	sort(num, 5);
	//������ֵ
	printf("max=");
	for (i = 4; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	int flag = 1; //��С�����ң��ҵ�һ����Ϊ�����Сֵ��
	printf("\nmin=");
	for (i = 0; i < 5; i++)
	{
		if (num[i] != 0 && flag)
		{
			printf("%d", num[i]);
			int j;
			for (j = 0; j < i; j++)
			{
				printf("%d", num[j]); //Ҳ������ν��0.
			}
			flag = 0; //�ҵ����־���㡣
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
	gets_s(a); //����5���ַ��س�����
	fun(a);
	return 0;
}