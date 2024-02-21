
#include<stdio.h>
int main ()
{  int Asize,mid,i;
  char a[50], Se[50];

  printf("\n Enter your array size:");
  scanf("%d", &Asize ) ;

  for( i=0; i<Asize; i++)
  {
      scanf("%s", &a[i] );
  }
 printf("\n Enter search Element:");
 scanf("%s", &Se);
 int s=0, end=Asize-1;
 int result= RecursiveLinearS(a, Se, s, end);
 if (result==-1)
     printf("Element not found");
else
    printf("Element found at index %d", result);

}


int RecursiveLinearS(char a[], char Se[],int s,int end )
{
  if(end>=s)
   {
     int mid=s+(end-s)/2;

     if(a[mid]==Se[0])
      return mid;

     if (a[mid]>Se[0])
            return RecursiveLinearS(a, Se, s, mid-1);
    else
           return  RecursiveLinearS(a, Se, mid+1, end);
   }
else
 return -1;
}
