/* https://github.com/sohitfirs/7.3.git */

#include <stdio.h>
#include <cmath>
#include <cstdlib>

int sqrt()
{
	int mas1[4];
	int mas2[4];
	int x = 0;
	
	printf("Vvedite 3 polozhitelnyh chisla\n");
	for (int i=0; i<3;i++)
	{
		printf("Vvedite %i chislo - ", i+1);
		scanf("%i", &mas1[i]);
		if (mas1[i]<0)
		{
			return -1;
			
		}
	}
	
	for (int i=0; i<3; i++)
	{
		mas2[i] = pow(mas1[i],0.5);
	}
	
	for (int i=0; i<3;i++)
	{
		if(mas1[i]==mas2[i]*mas2[i])
		{
			x++;
		}
	}
	return x;
}

int sqrt2();

int main()
{
	int y = sqrt();
	int *x = &y ;
	int &w = y;
	
	if (y==-1)
	{
		printf("ERROR\nVse chisla dolzhny byt polozhitelnye\n");
	}
	else
	{
		printf("%i\n",y);
	//	printf("%i\n", &y);
		
		printf("%i\n", *x);
	//	printf("%i ", x);
	//	printf("%i\n", &x);
		
		printf("%i\n", w);
	//	printf("%i\n", &w);
	}
		
	system ("pause");
	return 1;
}
