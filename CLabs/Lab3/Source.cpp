#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
	int b;
	int c;
};
int main()
{
	int* a;
	int temp;
	MyStruct* beep;
	int i, n;
	printf("input n: ");
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	beep= (MyStruct*)malloc(10 * sizeof(MyStruct));
	for (i = 0; i < 10; i++)
	{
		beep[i].b = i;
		beep[i].c = 0;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
	for (i = 0; i < n; i++)
	{
		beep[a[i]].c += 1;
	}
	printf("\n");




	for (int i = 1; i < 10; i++)
	{
		for (int i = 1; i < 10; i++)
		{
			if (beep[i].c > beep[i - 1].c)
			{
				temp = beep[i - 1].c;
				beep[i - 1].c = beep[i].c;
				beep[i].c = temp;


				temp = beep[i - 1].b;
				beep[i - 1].b = beep[i].b;
				beep[i].b = temp;
			}
		}
	}
	int m;
	int *z = (int*)malloc(10 * sizeof(int));
	printf("input m: ");
		while (true)
		{
			scanf("%d", &m);
			if ((m > n) || (m > 10))
			{
				printf("m must be <= than n and < 10\n");
			}
			else
			{
				break;
			}
		}
	
	for (i = 0; i < m; i++)
	{
		printf("%d : %d ~ %d%%\n", beep[i].b, beep[i].c, beep[i].c * 100/n);
	}
	for (i = 0; i < 10; i++)
	{
		if (beep[i].c != 0)
		{
			printf("%d",beep[i].b);
		}
	}
}