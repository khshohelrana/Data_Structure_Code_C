#include<stdio.h>
int main ()
{ int Asize,i;
 char a[50],Se[50];

  printf("\n Enter your array size: ");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%s", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%s", &Se);


for( i=0; i<Asize; i++)
{
    if(Se[0]==a[i])
    {  printf("\n Element found at index %d " ,i);
      break;
    }

}

 if(i==Asize)
printf("\n Element not found");

}
