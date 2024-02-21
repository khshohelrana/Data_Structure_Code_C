#include<stdio.h>
#include<stdlib.h>
#define size 7
int a[size],front=-1,rear=-1;

int main()
{
    int n,value;
    do
    {   printf("\n\tEnter 1: Enqueue.");
        printf("\n\tEnter 2: Dequeue.");
        printf("\n\tEnter 3: Display.");
        printf("\n\tEnter 4: Exit.");
        printf("\n Enter your option:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:  printf(" Enter the Element you want: ");
                     scanf("%d", &value);
                     enqueue(value);
                     break;

            case 2:  dequeue();
                     break;

            case 3:  display();
                     break;

            case 4:  exit(0);

            default: printf("Invalid option.");

            return 0;
        }
    } while(n<=4);
}


void enqueue(int value)
{
    if((front==0 && rear==size-1) || (front==rear+1))
    {   printf("The Queue is full");
        return;
    }
   else if(rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        if(rear==size-1)
            rear=0;
        else
            rear=rear+1;
    }
    a[rear]= value;

    printf("Added Element is %d ", a[rear]);
}
void dequeue()
{
    if(rear==-1)
    {

        printf("The Queue is empty.");
        return;
    }

      printf("Deleted Element is %d ", a[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        if(front==size-1)
            front=0;
        else
            front=front+1;
    }
}
void display()
{ int i;

    if(rear<=-1)
    {

        printf("The Queue is empty.");
    }
    else
    {

        printf("The Queue's elements are: ");
        if(front<=rear)
        {
            for( i=front; i<=rear; i++)
                printf("%d", a[i]);
        }

        else
        {
            for( i=front; i<=size-1; i++)
                printf("%d", a[i]);
            for( i=0; i<=rear; i++)
                printf("%d", a[i]);
        }
    }


}
