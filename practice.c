
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void createList(int n);
void traverseList();


int main()
{
    int n;int sata;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    traverseList(sata);

    return 0;
}


void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}


/*
 * Display entire list
 */
void traverseList(int sata)
{
    struct node *temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;                 // Move to next node
    }
}
