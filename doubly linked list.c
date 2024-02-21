#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node *pre, *next;
}*head=NULL;
int main()

{ system("color 70");
    int option, option2, value, p;


    while(1)
    {
        start:
            printf("\n\t1.Inset ");
            printf("\n\t2.Delete ");
            printf("\n\t3.Display");
            printf("\n\t4.Exit");
            printf("\n Enter your option: ");
            scanf("%d", &option);
            switch(option)
            {
                case 1:   printf(" Enter the value to be inserted: ");
                          scanf("%d", &value);
                          while(1)
                          {
                              printf("\n\t1.At Beginning");
                              printf("\n\t2.At End");
                              printf("\n\t3.At any specific position");
                              printf("\n\t4.Cancel");
                              printf("\n Enter your option");
                              scanf("%d", &option2);
                              switch(option2)
                              {
                                  case 1: insertbeg(value);
                                           break;
                                 case 2: insertend(value);
                                         break;

                                 case 3: printf(" Enter position: ");
                                         scanf("%d",&p);
                                         insertatanyposition(value,p);
                                         break;
                                 case 4: goto endswitch;
                                 default: printf(" Enter correct inserting option");

                              }
                              goto start;

                          }
                           break;

                                 case 2:
                                    while(1)
                                          {
                              printf("\n\t1.From Beginning");
                              printf("\n\t2.From End");
                              printf("\n\t3.From any specific position");
                              printf("\n\t4.Cancel");
                              printf("\nEnter your option");
                              scanf("%d", &option2);
                              switch(option2)
                              {
                                  case 1: deletebeg();
                                         break;
                                 case 2: deleteend();
                                         break;
                                 case 3:
                                         deleteanyposition();
                                         break;
                                 case 4: goto endswitch;
                                  default: printf(" Enter correct deleting option");

                              } goto start;
                        }
                        break;
                        endswitch:
                        break;

                        case 3: display();
                                break;
                        case 4: exit(0);
                               break;
                               default: printf("Select correct option");


            }
    }
    return 0;
}


void insertbeg( int value)
{
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode-> data= value;
    newNode->pre= NULL;
    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;

    }
    printf("\n value inserted");

}


void insertend(int value)
{
   struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode-> data= value;
    newNode->next=NULL;
    if(head==NULL)
    {
       newNode->pre=NULL;
        head=newNode;
    }
    else
    {
        struct Node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        newNode->pre=temp;
    }
    printf("\n value inserted");
}

void insertatanyposition(int value, int p)
{
   int i=1;
   struct Node * newNode, *temp;
   if(head == NULL){
      printf(" No data found in the list!\n");
   }
   else{
      temp = head;

      while(i<p-1 && temp!=NULL)
        {
         temp = temp->next;
         i++;
      }
      if(p == 1)
      {
         insertbeg( value);
      }
      else if(temp == newNode)
      {
         insertend( value);
      }
      else if(temp!=NULL){
         newNode = (struct Node *)malloc(sizeof(struct Node));
         newNode->data = value;
         newNode->next = temp->next;
         newNode->pre = temp;

         if(temp->next != NULL){
            temp->next->pre = newNode;
         }
         temp->next = newNode;
      }
      else{
         printf(" The position is invalid.\n");
      }
   }
}


void deletebeg()
{
    if(head==NULL)
    {
        printf(" List is empty");
    }
    else
    {
        struct Node *temp=head;
        if(temp->pre==temp->next)
        {
            head=NULL;
            free(temp);
        }
        else
        {
            head=temp->next;
            head->pre=NULL;
            free(temp);
        }
        printf(" Deletion success");

    }
}

void deleteend()
{  struct Node *temp=head;
  if(head==NULL)
     printf(" List is empty");

  while(temp->next!=NULL)
     temp=temp->next;
  temp->pre->next=NULL;
  free(temp);
  printf(" Deletion success");

}

void deleteanyposition()
{  int i=1,p;
printf(" Enter position: ");
    scanf("%d",&p);
  struct Node *temp=head;
  if(head==NULL)
    {

     printf(" List is empty");
     return ;
    }

        if (p==1)
        {
          head=temp->next;
          head->pre=NULL;
          return ;
        }

       while(i<p-1)
       {
         temp=temp->next;
         i++;
       }
     temp->pre->next=temp->next;
     temp->next->pre=temp->pre;
     free(temp);



}

void display()
{
    if(head==NULL)
      printf(" List is empty");

    else
    {
        struct Node *temp=head;
        printf("\n list elements are: ");
        printf("NULL<---");
        while(temp->next!=NULL)
        {
            printf("%d <====>", temp->data);
            temp=temp->next;
        }printf("%d ---> NULL",temp->data);

    }
}
