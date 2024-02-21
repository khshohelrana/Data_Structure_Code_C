/*#include<stdio.h>
int main ()
{ int Asize,i, a[50],Se;

  printf("\n Enter your array size: ");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%d", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%d", &Se);
 int result=RecursiveLinearS( a,  Se,  Asize);
 if(result==-1)
  printf("Element not found");


 else
     printf("Element found at index %d",result);

}


int RecursiveLinearS(int a[], int Se, int Asize)
{
  Asize=Asize-1;

   if(Asize<0)
    {
      return -1;
    }
    else if(a[Asize]==Se)
    {
      return Asize;
    }
      else
     return RecursiveLinearS(a,Se,Asize);
}
*/

#include<stdio.h>
int main ()
{ int Asize,i, a[50],Se;

  printf("\n Enter your array size: ");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%d", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%d", &Se);
 int result=RecursiveLinearS( a,  Se, 0, Asize);
 if(result==-1)
  printf("Element not found");


 else
     printf("Element found at index %d",result);

}


int RecursiveLinearS(int a[], int Se, int s,int Asize)
{


   if(s>=Asize)
    {
      return -1;
    }
    else if(a[s]==Se)
    {
      return (s);
    }
      else
     return RecursiveLinearS(a,Se,s+1,Asize);
}


