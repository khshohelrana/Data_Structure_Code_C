#include<stdio.h>
int main ()
{  int Asize,mid, a[50],i, Se;

  printf("\n Enter your array size:");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%d", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%d", &Se);
 int s=0, end=Asize-1;
 int result= binarysrch(a, Se, s, end);
 if (result==-1)
     printf("Element not found");
else
    printf("Element found at index %d", result);

}


int binarysrch(int a[], int Se,int s,int end )
{
  if(end>=s)
   {
     int mid=s+(end-s)/2;

     if(a[mid]==Se)
      return mid;

     if (a[mid]>Se)
            return binarysrch(a, Se, s, mid-1);
    else
           return  binarysrch(a, Se, mid+1, end);
   }
else
 return -1;
}




