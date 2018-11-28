#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
main()
{
	int create_arr();
	//system("pause");
	//void f1( arr[MAXSIZE],MAXSIZE);
	//printf("%d",f1);
}

int create_arr()//创建一个从1到100的数组
{
	int arr[MAXSIZE] = {0};
	int j;
	for (int j = 1;j <= MAXSIZE;j++)
	{
		arr[j] = j;
		printf("数组已建立：arr[%d]=%d\n", j, arr[j]);
	}
	system("pause");
	int temp, n = MAXSIZE;
	for (int i = 0;i <= n / 2 - 1;i++)
	{
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
		printf("数组倒置：\n arr[%d]=%d\n", j, arr[j]);
	}
	system("pause");
}
/*
void f1(int a[], int n)
{
	int i, temp;
	for (i = 0;i <= n / 2 - 1;i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
*/


