#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 15

using namespace std;

int main()
{
    int i, row, col, n, a[MAX][MAX] = { 0 };
    printf("请输入阶数：");
    scanf("%d", &n);
    row = 0;
    col = (n - 1) / 2;

    for (i = 2; i <= n * n; i++) {//依次填入2至n×n
        if (a[(row - 1 + n) % n][(col + 1) % n] == 0) {// 如下一位置未填
            row = (row - 1 + n) % n;//计算下一个位置的行号
            col = (col + 1) % n; // 计算下一个位置的列号
        }
        else {
            row = (row + 1) % n;  // 填当前列的下一行
        }
        a[row][col] = i;// 填入
    }

    printf("%d阶魔方阵如下：\n", n);
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) printf("%4d", a[row][col]);
        printf("\n");
    }
}

