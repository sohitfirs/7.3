/* https://github.com/sohitfirs/7.3.git */

#include <stdio.h>
#include <cmath>
#include <cstdlib>

int sqrt(int a)
{
	int x = 0;
	
	for (int i=0; i<a+1; i++)
	{
		if (i*i==a)
		{
			x++;
		}
	}
	return x;
}

int sqrt(int b, int x)
{
	int *y = &b;
	
	for (int i=0; i<*y+1; i++)
	{
		if (i*i==*y)
		{
			x++;
		}
	}
	return x;
}

int sqrt(int c, int x, int y)
{
	for (int i=0; i<y+1; i++)
	{
		if (i*i==y)
		{
			x++;
		}
	}
	return x;
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int x = 0;
	int &y = c;
	
	printf("Vvedite 3 polozhitelnyh chisla\n");
	printf("Vvedite 1 chislo - ");
	scanf("%i", &a);
	printf("Vvedite 2 chislo - ");
	scanf("%i", &b);
	printf("Vvedite 3 chislo - ");
	scanf("%i", &c);
	
	d = sqrt(a)+sqrt(b, x)+sqrt(c, x, y);
	printf("%i\n", d);
	
	system("pause");
	return 1;
}
