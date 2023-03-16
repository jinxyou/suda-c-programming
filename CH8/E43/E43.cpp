#include<stdio.h>

void delchar(char* p, int k, int n)
{
    int nn, nnn;
    char* q;
    k--;
    nn = 0; q = p; while (*q) { q++; nn++; }
    nnn = nn - k - n; if (nnn < 0) return;
    p += k; q = p; q += n; while (*q) { (*p) = (*q); p++; q++; }
    (*p) = 0;
}
void main()
{
    char a[20];
    printf("ÇëÊäÈëÒ»ÐÐ×Ö·û´®:");
    scanf_s("%s", a);
    printf("%s\n", a);
    delchar(a, 5, 3);
    printf("%s\n", a);

}