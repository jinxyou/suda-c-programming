#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 15

using namespace std;

int main()
{
    int i, row, col, n, a[MAX][MAX] = { 0 };
    printf("�����������");
    scanf("%d", &n);
    row = 0;
    col = (n - 1) / 2;

    for (i = 2; i <= n * n; i++) {//��������2��n��n
        if (a[(row - 1 + n) % n][(col + 1) % n] == 0) {// ����һλ��δ��
            row = (row - 1 + n) % n;//������һ��λ�õ��к�
            col = (col + 1) % n; // ������һ��λ�õ��к�
        }
        else {
            row = (row + 1) % n;  // �ǰ�е���һ��
        }
        a[row][col] = i;// ����
    }

    printf("%d��ħ�������£�\n", n);
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) printf("%4d", a[row][col]);
        printf("\n");
    }
}

