#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

int main()
{
    int n,s;

    printf("\n Enter how many elements you want: ");
    scanf("%d", &n);
    insertlist(n);

    printf("\n Enter Search Element: ");
    scanf("%d",&s);
    linearSearchList(s);

    return 0;
}


void insertlist(int n)
{
    struct node *newNode, *t;
    int data, i;

   head = (struct node *)malloc(sizeof(struct node));

    head->data = data;
    head->next = NULL;

    t = head;
    for(i=0; i<n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;
        t->next = newNode;
        t = t->next;
    }
}



void linearSearchList(int s)
{
    struct node *t;


    if(head == NULL)
    {
        printf("\n List is empty.");
        return;
    }

    t= head;
    int c=0;
    while(t != NULL)
    {    c++;
        if(s ==t->data)
        {
            printf(" %d found at %d index",s,c-2);
            break;
        }


        t = t->next;
    }
}
