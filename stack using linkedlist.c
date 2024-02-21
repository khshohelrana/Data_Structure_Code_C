#include<stdio.h>
#define size 6

struct node
{

    char data;
    struct node *next,*pre;

}* head=NULL;

int top=0;

int main()
{
    system("color 70");
    int choise;
    char value;
    do
    {
mainMenu:
        printf("\n\t1.Push");
        printf("\n\t2.Pop");
        printf("\n\t3.Search an Element.");
        printf("\n\t4.Display");
        printf("\n\t5.Size");
        printf("\n\t6.Exit");

        printf("\n\tEnter your choice: ");
        scanf("%d", &choise);
        switch(choise)
        {
        case 1:

            printf("\nEnter the inserted value: ");
            scanf("\n%c", &value);
            push(value);
            break;

        case 2:

            pop();
            break;

        case 3:

            printf("Enter the search element: ");
            scanf("\n%c", &value);
            search(value);
            break;

        case 4:

            display();
            break;

        case 5:

            printf("The stack size is %d", top );
            break;

        case 6:

            return 0;
            break;

        default:

            printf("Please Enter valid choice.");
            goto mainMenu;

        }
    } while(choise<=6);
}

void push(char value)
{
    if(top>=size)
    {
        printf("OVERFLOW");
        return;
    }
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->pre=NULL;

    if(head==NULL)
    {
        head=newnode;
        top++;
        return;
    }

    struct node *temp=head;
    while(temp->next!=NULL)
          temp=temp->next;

    temp->next=newnode;
    newnode->pre=temp;
    top++;
}
void search(char value)
{
    if(head==NULL)
    {
        printf("Stack is Empty.");
        return;
    }
    struct node *temp=head;
    int f=-1;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            printf("Element is founded.");
            f=0;
            break;
        }
        temp=temp->next;
    }
    if(f==-1)
    {
        printf("Element not founded.");
    }
}
void pop()
{
    if(head==NULL)
    {
        printf("Underflow.");
        return;
    }
    if(head->next==NULL)
    {
        head=NULL;
        top--;
        return;
    }
    struct node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    top--;
}
void display()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("No element to display.");
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    printf(" <---");
    while(temp!=NULL)
    {
        printf(" %c--",temp->data);


        temp=temp->pre;
    }
    printf("--->");
}
