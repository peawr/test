#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct node
{
    int a;
    float b;
    char c;

    char msg[0];
};

int main()
{
    char buf[100];
    fgets(buf, 100, stdin);

    int n = strlen(buf) + 1;

    struct  node *p = malloc(sizeof(struct node) + n);

    p->a = 100;
    p->b = 3.14;
    p->c = 'a';
    strncpy(p->msg, buf, n);

    printf("size of struct: %d\n", sizeof(struct node)+n);
    printf("msg: %s\n", p->msg);

    return 0;
}