#include <stdio.h>
#include <cmath>

struct Data
{
public:
	int day_of_birth;
	int month_of_birth;
	char sex;
	int element;
	int zodiac;
};

int zodiacDefinition(int a, int b);
void printMenu();
int checkInt();
char checkChar();
void Goroskoper();
int dayOfYear(int a, int b);
void outputZodiac(int a);
int zodiacElement(int a);
void buisness(char a, char b, int c, int d);



void main()
{
	int choose;
	Data data[2];
	while (true)
	{
		printMenu();
		choose = checkInt();
		switch (choose)
		{
		case 1:
		{
			printf("Input date of birth (DD/MM) and sex (M/F) of the first member\n");
			data[0].day_of_birth = checkInt();
			data[0].month_of_birth = checkInt();
			data[0].sex = checkChar();
			break;
		}
		case 2:
		{
			printf("Input date of birth (DD/MM) and sex (M/F) of the second member\n");
			data[1].day_of_birth = checkInt();
			data[1].month_of_birth = checkInt();
			data[1].sex = checkChar();
			break;
		}
		case 3:
		{
			data[0].zodiac = zodiacDefinition(data[0].day_of_birth, data[0].month_of_birth);
			outputZodiac(data[0].zodiac);
			data[1].zodiac = zodiacDefinition(data[1].day_of_birth, data[1].month_of_birth);
			outputZodiac(data[1].zodiac);

			break;
		}
		case 4:
		{
			data[0].element = zodiacElement(data[0].zodiac);
			data[1].element = zodiacElement(data[1].zodiac);
			if (data[0].element == data[1].element)
			{
				printf("Yes.\n");
			}
			else
			{
				printf("No\n");
			}
			break;
		}
		case 5:
		{
			if ((data[0].zodiac == data[1].zodiac) || (abs(data[0].zodiac - data[1].zodiac) == 6))
			{
				printf("Yes.\n");
			}
			else
			{
				printf("No.\n");
			}
			break;
		}
		case 6:
		{
			buisness(data[0].sex, data[1].sex, zodiacElement(data[0].zodiac), zodiacElement(data[1].zodiac));
			break;
		}
		case 7:
		{
			Goroskoper();
			break;
		}
		case 8:
		{
			return;
		}
		default:
			break;
		}
	}


}

void buisness(char a, char b, int c, int d)
{
	if (a == b && ((c == 1 and d == 2) || (c == 3 and d == 4) || (c == 4 and d == 3) || (c == 2 and d == 1)))
	{
		printf("Yes.\n");
	}
	else
	{
		printf("No.\n");
	}
	return;
}


void printMenu()
{
	printf("Choose any option:\n");
	printf("1.Input 1st member.\n");
	printf("2.Input 2st member.\n");
	printf("3.Finding of the zodiac sign.\n");
	printf("4.Friendship?\n");
	printf("5.Buisness?\n");
	printf("6.Marriage?\n");
	printf("7.Version and creator.\n");
	printf("8.Exit.\n");
}

void outputZodiac(int a)
{
	switch (a)
	{
	case 1:
	{
		printf("Aries\n");
		break;
	}
	case 2:
	{
		printf("Taurus\n");
		break;
	}
	case 3:
	{
		printf("Gemini\n");
		break;
	}
	case 4:
	{
		printf("Cancer\n");
		break;
	}
	case 5:
	{
		printf("Leo\n");
		break;
	}
	case 6:
	{
		printf("Virgo\n");
		break;
	}
	case 7:
	{
		printf("Libra\n");
		break;
	}
	case 8:
	{
		printf("Scorpio\n");
		break;
	}
	case 9:
	{
		printf("Sagittarius\n");
		break;
	}
	case 10:
	{
		printf("Capricorn\n");
		break;
	}
	case 11:
	{
		printf("Aquarius\n");
		break;
	}
	case 12:
	{
		printf("Pisces\n");
		break;
	}

	default:
		break;
	}

	return;
}

int zodiacElement(int a)
{
	switch (a)
	{
	case 1:
	{
		return 1;
	}
	case 2:
	{
		return 2;
	}
	case 3:
	{
		return 3;
	}
	case 4:
	{
		return 4;
	}
	case 5:
	{
		return 1;
	}
	case 6:
	{
		return 2;
	}
	case 7:
	{
		return 3;
	}
	case 8:
	{
		return 4;
	}
	case 9:
	{
		return 1;
	}
	case 10:
	{
		return 2;
	}
	case 11:
	{
		return 3;
	}
	case 12:
	{
		return 4;
	}
	}
}

int dayOfYear(int a, int b)
{
	int year[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int day = 0;
	for (int i = 0; i < b; i++)
	{
		day += year[i];
	}
	day += a;
	return day;
}

int zodiacDefinition(int a, int b)
{
	int sum = dayOfYear(a, b);
	if (sum >= dayOfYear(21, 3) && sum <= dayOfYear(20,4))
	{
		return 1;
	}
	else if (sum >= dayOfYear(21, 4) && sum <= dayOfYear(20, 5))
	{
		return 2;
	}
	else if (sum >= dayOfYear(21, 5) && sum <= dayOfYear(21, 6))
	{
		return 3;
	}
	else if (sum >= dayOfYear(22, 6) && sum <= dayOfYear(22, 7))
	{
		return 4;
	}
	else if (sum >= dayOfYear(23, 7) && sum <= dayOfYear(23, 8))
	{
		return 5;
	}
	else if (sum >= dayOfYear(24, 8) && sum <= dayOfYear(23, 9))
	{
		return 6;
	}
	else if (sum >= dayOfYear(24, 9) && sum <= dayOfYear(23, 10))
	{
		return 7;
	}
	else if (sum >= dayOfYear(24, 10) && sum <= dayOfYear(22, 11))
	{
		return 8;
	}
	else if (dayOfYear(23, 11) && sum <= dayOfYear(21, 12))
	{
		return 9;
	}
	else if (sum >= dayOfYear(22, 12) && sum <= dayOfYear(20, 1))
	{
		return 10;
	}
	else if (sum >= dayOfYear(21, 1) && sum <= dayOfYear(20, 2))
	{
		return 11;
	}
	else if (sum >= dayOfYear(21, 2) && sum >= dayOfYear(20, 3))
	{
		return 12;
	}
}

void Goroskoper()
{
	printf("Goroskoper v1.0 by Sivsivadze Ilya\n");
	return;
}


int checkInt()
{
	bool incorrectInput = true;
	int a;
	rewind(stdin);
	while (!scanf_s("%d", &a))
	{
		rewind(stdin);
		printf("Incorrect input. Input m: ");
	}
	return a;
}

char checkChar()
{	
	bool incorrectInput =  true;
	char a;
	rewind(stdin);
	while (incorrectInput)
	{ 
		if (scanf("%c", &a))
		{
			if (a != 'F' && a != 'M' && a != 'f' && a != 'm')
			{
				rewind(stdin);
				printf("Incorrect input. Input m: ");
			}
			else
			{
				incorrectInput = false;
			}
		}
		else
		{
			rewind(stdin);
			printf("Incorrect input. Input m: ");
		}
	}
	return a;
}