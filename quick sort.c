#include<stdio.h>
 int main()
 {
   int n ;

   printf("How many elements you want: ");
   scanf("%d",&n);

   int a[n];
   printf("Enter %d elements: ", n);
   for(int i=0; i<n; i++)
      scanf("%d",&a[i]);

   quicksort(a,0,n-1);

   printf("Order of Sorted elements: ");
   for(int i=0; i<n; i++)
      printf(" %d",a[i]);

   return 0;
}


void quicksort(int a[],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last)
    {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
      {
         while(a[i]<=a[pivot])
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

   }
}

