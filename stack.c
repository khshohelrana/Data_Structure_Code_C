#include<stdio.h>
#define size 5
char stack[size];
int top=-1;
int main()
{
  int n;
  char  value;
  do
  {
      printf(" \n\t1: PUSH");
      printf(" \n\t2: POP");
      printf(" \n\t3: OUTPUT");
      printf(" \n\t4: Exit");
      printf(" \n\n Enter your option: ");
      scanf("%d", &n);
      switch(n)
      {
      case 1:
        printf("Enter the pushed value: ");


               scanf("\n%c", &value);
                push(value);

           break;
      case 2:
        pop();
        break;
      case 3:
        output();
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Invalid ");
        break;
      }
  } while(n<=4);
  return 0;
}

int push(int value)
{
    if(top>=size-1)
        printf("OVERFLOW");
    else
       {

    top++;
    stack[top]=value;
    printf("inserted value: %c",stack[top] );}
}

int pop()
{
    if(top<=-1)
        printf("UNDERFLOW");
    else
    {
        printf("The popped value: %c", stack[top]);
        top--;
    }
}
int output()
{
    if(top>=0)
       {

        printf("Stack's value are: \n");
    for(int i=0; i<=top; i++)
    {
        printf("%c", stack[i]);
    }}
    else
        printf("Stack is empty");
}

