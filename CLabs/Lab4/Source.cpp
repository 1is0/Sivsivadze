#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct MyString
{
	char a[100];
	char b[100];
	int Size(char z[])
	{
		int i = 0;
		while (z[i] != '\0')
		{
			i++;
		}
		return i;
	}
	bool PalindromeCheck(char k[])
	{
		int counter = 0;
		int size = Size(k);
		for (int i = size - 1; i >= 0; i--)
		{
			b[counter] = a[i];
			counter++;
		}
		for (int i = 0; i < size; i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
		}
		return true;
	}
};



int main()
{
	MyString* str;
	system("chcp 1251");
	printf("iput n:");
	int n;
	scanf("%d", &n);

	str = (MyString*)malloc(n * n * sizeof(MyString));


	for (int i = 0; i < n; i++)  // цикл по строкам
	{
		for(int j = 0; j < n; j++)  // цикл по столбцам
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%s", (str[i * n + j].a));
			if (str->PalindromeCheck(str[i * n + j].a))
			{
				printf("%s",str[i * n + j].a);
			}
		}
	}
	for (int i = 0; i < n; i++)  // цикл по строкам
	{
		for (int j = 0; j < n; j++)  // цикл по столбцам
		{
			if (str->PalindromeCheck(str[i * n + j].a))
			{
				printf("a[%d][%d] = %s ", i, j , str[i * n + j].a);
			}
		}
	}





}