#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#define MAXWORD 100

struct tnode 
{               
    char* word;                  
    int count;                   
    struct tnode* left;         
    struct tnode* right;         
};

struct tnode* addtree(struct tnode* p, char* w) 
{
    int cond;
    if (p == NULL) 
    {
        p = (struct tnode*)malloc(sizeof(struct tnode));
        p->word = _strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    }
    else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);
    return p;
}

void freemem(tnode* tree) 
{
    if (tree != NULL)
    {
        freemem(tree->left);
        freemem(tree->right);
        free(tree);
    }
}

void printLleft(struct tnode* p)
{
    if (p != NULL)
    {
        printLleft(p->left);
        printf("%s %d times\n", p->word, p->count);
    }
}
void printRright(struct tnode* p)
{
    if (p != NULL)
    {
        printf("%s %d times\n", p->word, p->count);
        printRright(p->right);
    }
}

void treeprint(struct tnode* p) 
{
    if (p != NULL)
    {
        treeprint(p->left);
        printf("%s %d times\n", p->word, p->count);
        treeprint(p->right);
    }
}
int main() 
{
    struct tnode* root;
    char word[MAXWORD];
    root = NULL;
    do 
    {
        scanf("%s", word);
        if (isalpha(word[0]))
            root = addtree(root, word);
    } while (word[0] != '0');    // условие выхода Ц ввод символа С0Т
    /*treeprint(root);*/
    treeprint(root);
    freemem(root);
    getchar();
    getchar();
    return 0;
}