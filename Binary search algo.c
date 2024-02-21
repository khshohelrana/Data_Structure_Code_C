#include<stdio.h>
int main ()
{  int Asize,mid;
char a[50],i, Se[100];


  printf("\n Enter your array size:");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%s", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%s", &Se);
 int s=0, end=Asize-1,p=-1;
while(s<=end)
{
     mid=(s+end)/2;
    if(a[mid]==Se[0])
    {
       p=mid;
       break;
    }
    else {

        if(a[mid]>Se[0])
        end=mid-1;
        else
        s=mid+1;

    }

}
if(p==mid)
printf("\n Element found at index %d \n", mid);
else
printf("\n Element not found \n");

}
