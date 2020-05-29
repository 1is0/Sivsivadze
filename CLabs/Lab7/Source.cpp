#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
typedef struct _StudentNode
{
	char name[20];
	char faculty[20];
	int course;
	char group[7];
	int warnings;
	bool mustEvict;
	_StudentNode* next;
	_StudentNode* prev;
}StudentNode;
typedef struct _StudentList
{
	size_t size;
	StudentNode* head;
	StudentNode* tail;
}StudentList;

bool EvictChecker(int a)
{
	if (a >= 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}


StudentList* CreateList()
{
	StudentList* tmp = (StudentList*)malloc(sizeof(StudentList));
	tmp->size = 0;
	tmp->head = tmp->tail = NULL;
	return tmp;
}

void DeleteList(StudentList**list)
{
	StudentNode* tmp = (*list)->head;
	StudentNode* next = NULL;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(*list);
	(*list) = NULL;
}



void PushFront(StudentList* list, char a[], char b[], int c, char d[], int e)
{
	StudentNode *tmp = (StudentNode*)malloc(sizeof(StudentNode));
	if (tmp == NULL)
	{
		exit(1);
	}
	strcpy(tmp->name, a);
	strcpy(tmp->faculty, b);
	tmp->course = c;
	strcpy(tmp->group, d);
	tmp->warnings = e;
	tmp->mustEvict = EvictChecker(e);
	tmp->next = list->head;
	tmp->prev = NULL;
	if (list->head)
	{
		list->head->prev = tmp;
	}
	list->head = tmp;
	if (list->tail == NULL)
	{
		list->tail = tmp;
	}
	list->size++;
	
}

void PopFront(StudentList* list)
{
	StudentNode* prev;
	if (list->head == NULL)
	{
		exit(2);
	}
	prev = list->head;
	list->head = list->head->next;
	if (list->head)
	{
		list->head->prev = NULL;
	}
	if (prev == list->tail)
	{
		list->tail = NULL;
	}
	free(prev);
	list->size--;
}

void PushBack(StudentList* list, char a[], char b[], int c, char d[], int e)
{
	StudentNode* tmp = (StudentNode*)malloc(sizeof(StudentNode));
	if (tmp == NULL)
	{
		exit(3);
	}
	strcpy(tmp->name, a);
	strcpy(tmp->faculty, b);
	tmp->course = c;
	strcpy(tmp->group, d);
	tmp->warnings = e;
	tmp->mustEvict = EvictChecker(e);
	tmp->next = NULL;
	tmp->prev = list->tail;
	if (list->tail)
	{
		list->tail->next = tmp;
	}
	list->tail = tmp;
	if (list->head == NULL)
	{
		list->head = tmp;
	}
	list->size++;
}

void PopBack(StudentList* list)
{
	StudentNode* next;
	if (list->tail == NULL)
	{
		exit(4);
	}
	next = list->tail;
	list->tail = list->tail->prev;
	if (list->tail)
	{
		list->tail->next = NULL;
	}
	if (next == list->head)
	{
		list->head = NULL;
	}
	free(next);
	list->size--;
}

StudentNode* GetNth(StudentList *list, size_t index)
{
	StudentNode* tmp = list->head;
	size_t i = 0;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return tmp;
}
void DeleteNth(StudentList* list, size_t index)
{
	StudentNode* elm = NULL;
	elm = GetNth(list, index);
	if (elm == NULL)
	{
		exit(5);
	}
	if (elm->prev)
	{
		elm->prev->next = elm->next;
	}
	if (elm->next)
	{
		elm->next->prev = elm->prev;
	}
	if (!elm->prev)
	{
		list->head = elm->next;
	}
	if (!elm->next)
	{
		list->tail = elm->prev;
	}
	free(elm);
	list->size--;
}
void PrintStudList(StudentList* list)
{
	StudentNode* tmp = list->head;
	while (tmp)
	{
		printf("%-10s%-10s%-10d%-10s%-10d", tmp->name, tmp->faculty, tmp->course, tmp->group, tmp->warnings);
		if (tmp->mustEvict)
		{
			printf("%-10s", "Да");
		}
		else
		{
			printf("%-10s", "Нет");
		}
		printf("%c", '\n');
		tmp = tmp->next;
	}
}

void StudSaveFile(StudentList* list)
{
	StudentNode* tmp = list->head;
	FILE* std = fopen("Students.txt", "w");
	while (tmp)
	{
		fprintf(std, "%s%s%s%s%d%s%s%s%d%s", tmp->name, " ", tmp->faculty, " " , tmp->course, " ", tmp->group," ", tmp->warnings," ");
		tmp = tmp->next;
	}
	fclose(std);
	return;

}

void StudLoadFromFile(StudentList* list)
{
	FILE* std = fopen("Students.txt", "r");
	char ch = fgetc(std);
	if (ch == EOF)
	{
		return;
	}
	fseek(std, 0, SEEK_SET);
	fputc(ch, std);
	char name[20];
	char faculty[20];
	int course;
	char group[20];
	int warnings;
	while (fscanf(std, "%s%s%d%s%d",name, faculty, &course, group, &warnings)!= EOF)
	{
		PushBack(list, name, faculty, course, group, warnings);
	}
	fclose(std);
	return;
}
void main()
{
	const int totalSlots = 250;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choose;
	StudentList* StudList = CreateList();
	StudLoadFromFile(StudList);

	char tempName[20];
	char tempFaculty[20];
	int tempCourse;
	char tempGroup[20];
	int tempWarnings;

	while (true)
	{
		printf("----------Главное Меню----------\n");
		printf("1.Вывести список студентов\n");
		printf("2.Добавить студента в список\n");
		printf("3.Удалить студента по номеру в списке\n");
		printf("4.Отчет\n");
		printf("5.Закрыть\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			printf("%-10s%-10s%-10s%-10s%-10s%-10s", "ИМЯ", "ФАКУЛЬТЕТ","КУРС", "ГРУППА","ЗАМЕЧАНИЯ", "НУЖНО ВЫСЕЛИТЬ?\n");
			PrintStudList(StudList);
			break;
		}
		case 2:
		{
			printf("Введите данные по порядку:\n1)ИМЯ\n2)ФАКУЛЬТЕТ\n3)КУРС\n4)ГРУППА\n5)ЗАМЕЧАНИЯ\n");
			scanf("%s%s%d%s%d", tempName, tempFaculty, &tempCourse, tempGroup, &tempWarnings);
			PushBack(StudList, tempName, tempFaculty, tempCourse, tempGroup, tempWarnings);
			break;
		}
		case 3:
		{
			printf("Введите номер студента в списке для удаления:\n");
			int n;
			scanf("%i", &n);
			n--;
			DeleteNth(StudList, n);
			break;
		}
		case 4:
		{
			printf("%-15s%-15s%-15s","Всего жильцов","Свободных мест","Всего мест\n");
			printf("%-15d%-15d%-15d%s",StudList->size,totalSlots - StudList->size,totalSlots,"\n");
			break;
		}
		case 5:
		{
			StudSaveFile(StudList);
			return;
		}
		default:
		{
			printf("Неверный ввод");
		}
		}
	}
	


	
	
	//PopFront(MyList);
	//PrintStudList(MyList);

}