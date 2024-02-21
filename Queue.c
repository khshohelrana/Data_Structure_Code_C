#include<stdio.h>
#include<stdlib.h>
#define size 6
int a[size], front=-1, rear=-1;

int main(int argc, char const *argv[])
{ int option, value;
do{

    printf("\n\t1: Enqueue");
    printf("\n\t2: dequeue");
    printf("\n\t3: output");
    printf("\n\t4: counter");
    printf("\n\t5: exit");
    printf("\n\t Enter your option: ");
    scanf("%d", &option);
    switch(option)
    {
         case 1:
                printf("Enter the inserted value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
         case 2:
                dequeue();
                break;
         case 3:

                output();
                break;
        case 4:
                 count();
                   break;
         case 5:
               exit(0);
        default:
               printf("invalid");
    }

}while(option<=4);

  return 0;
}



void enqueue( int value)
{
    if(rear==size-1)
        //printf("Queue is full.");
        printf("OVERFLOW");
    else
    {
        if(rear+1==front)
          //printf("Queue is full.");
          printf("OVERFLOW");
        else
           {

            front=0;
            rear=rear+1;
            a[rear]=value;
            printf("inserted value: %d\n",a[rear]);
        }
    }
}

void  dequeue()
{
    if(front==-1)
        printf("No value to delete.");
    else
    {
        printf("DeletE value: %d",a[front] );
        front=front+1;
        if(front>rear)
           {
              front=-1;
            rear=-1;
           }
    }
}
void output()
{
    if(rear==-1)
   // printf("Queue is empty.");
   printf("UNDERFLOW");
    else
    {
        printf("Queue elements: ");
        for(int i=front; i<=rear; i++)
        {
            printf("%d", a[i]);

        }

    }
}
void count()
{   int i, c=0;
    for(i=front;i<=rear;i++)
    {
        c++;
    }
    printf( "The size of the Queue is: %d ",c);
}
