#include <stdio.h>
int main()
{
	int n = 3;
	fact1(n);
	fact2(n);
	//printf("n=%d,fact1=%d\n", n,fact1);
	system("pause");
}

float fact1(int n)
{
	int i, j, temp, s;
	s = 0;
	printf("n=%d,\n\n",n);
	for (i = 1;i <= n;i++)
	{
		temp = 1;
		

		for (j = 1;j <= i;j++)
			temp = temp* j;
			s = s + temp;

		printf("i=%d\nj=%d, temp=%d, s=%d\n\n", i, j, temp,s);
	}
	return s;
	//printf("%d %d %d %d %d", i, j, temp, s, n);
	//return s;
	system("pause");
}

int fact2(int n)
{
	int i, j, temp, s;
	j = 0;
	s = 0;temp = 1;
	for (i = 1;i <= n;i++)
	{
		temp = temp*i;
		s = s + temp;
		printf("i=%d\nj=%d, temp=%d, s=%d\n\n", i, j, temp, s);
	}
	return s;
	system("pause");
}
