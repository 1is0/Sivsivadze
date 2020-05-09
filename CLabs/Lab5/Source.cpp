#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define STACK_MAX_SIZE 20
#define STACK_OVERFLOW  -100
#define STACK_UNDERFLOW -101
typedef int T;
typedef struct Stack_tag 
{
    T data[STACK_MAX_SIZE];
    size_t size = 0;
} Stack_t;

void push(Stack_t* stack, const T value)
{
    if (stack->size >= STACK_MAX_SIZE) 
    {
        exit(STACK_OVERFLOW);
    }
    stack->data[stack->size] = value;
    stack->size++;
}

T pop(Stack_t* stack)
{
    if (stack->size == 0)
    {
        exit(STACK_UNDERFLOW);
    }
    stack->size--;
    return stack->data[stack->size];
}

T peek(const Stack_t* stack) 
{
    if (stack->size <= 0) {
        exit(STACK_UNDERFLOW);
    }
    return stack->data[stack->size - 1];
}
void printStackValue(const T value)
{
    printf("%d", value);
}

void printStack(const Stack_t* stack, void (*printStackValue)(const T)) 
{
    int i;
    int len = stack->size - 1;
    printf("stack size = %d : bottom > ", stack->size);
    for (i = 0; i < len; i++) {
        printStackValue(stack->data[i]);
        printf(" | ");
    }
    if (stack->size != 0) {
        printStackValue(stack->data[i]);
    }
    printf(" < top\n");
}
void stackCopy(Stack_t* st1, Stack_t* st2)
{
    Stack_t st_temp;
    T customsize = st1->size;
    st_temp.size = customsize;

    for (int i = 0; i < customsize; i++)
    {
        push(&st_temp, pop(st1));
    }
    for (int i = 0; i < customsize; i++)
    {
        push(st2, pop(&st_temp));
    }
}


int main()
{

    Stack_t stack;
    Stack_t stack1;


    T size;
    printf("input stack numbers count: ");
    scanf_s("%d", &size);
    printf("input numbers: ");
    T input;
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &input);
        push(&stack, input);
    }
    printStack(&stack, printStackValue);
    stackCopy(&stack, &stack1);
    printf("copied stack: \n");
    printStack(&stack1, printStackValue);
}