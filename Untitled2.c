#include<stdio.h>
#define s 5
char stack[s];
int top=-1;


int push(int val)
{
    if(top>=s-1)
        printf("Overflow");
    else
       {

    top++;
    stack[top]=val;
    printf("inserted value: %c",stack[top] );}
}

int pop()
{
    if(top<=-1)
        printf("Underflow");
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

        printf("Stack value are: \n");
    for(int j=0; j<=top; j++)
    {
        printf("%c", stack[j]);
    }}
    else
        printf("Stack is empty");
}
int main()
{
  int n;
  char  val;
  do
  {
      printf(" \n1: PUSH");
      printf(" \n2: POP");
      printf(" \n3: OUTPUT");
      printf(" \n4: Exit");
      printf(" \n Enter your choice: ");
      scanf("%d", &n);
      switch(n)
      {
      case 1:
        printf("Enter the value to be pushed: ");


               scanf("\n%c", &val);
                push(val);

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
