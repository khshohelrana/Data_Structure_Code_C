#include<stdio.h>
int main ()
{ int Asize,i;
char  a[50],Se[50];

  printf("\n Enter your array size: ");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%s", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%s", &Se);
int result=RecursiveLinearS( a,  Se, 0, Asize);
 if(result==-1)
  printf("Element not found");


 else
     printf("Element found at index %d",result);
return 0;
}


int RecursiveLinearS(char a[], char Se[], int i,int Asize)
{


   if(i>=Asize)
    {
      return -1;
    }
    else if(a[i]==Se[0])
    {
      return (i);
    }
      else
     return RecursiveLinearS(a,Se,i+1,Asize);
}



