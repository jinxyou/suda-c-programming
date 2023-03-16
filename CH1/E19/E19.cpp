#include "stdio.h"

using namespace std;

int main()
{
	int a, b, c;
	for (a = 0; a < 20; a++)
	{
		for (b = 0; b < 33; b++)
		{
			for (c = 0; c < 100; c += 3)
			{
				if (a+b+c==100 && a * 5 + b * 3 + c / 3 == 100) printf("ÂòÁË%dÖ»¼¦ÎÌ£¬%dÖ»¼¦Ä¸£¬%dÖ»¼¦³û.\n", a, b, c);
			}
		}
	}
}