#include<stdlib.h>
#include<stdio.h>

int main()
{
    int size;
    printf("array size: ");
    scanf("%d", &size);
    int arr[size] ;
    for (int i=0; i<size; i++)
     {
       scanf("%d", &arr[i]);
     }
printf("\n Given array is: ");
printArray(arr, size);
mergeSort(arr, 0,size - 1);
printf("\n Sorted array is : ");
printArray(arr, size);
return 0;
}

void mergeSort(int arr[], int low, int highest)
{
  if (low < highest)
{
int m = (low+highest)/2;
mergeSort(arr, low, m);
mergeSort(arr, m+1, highest);
merge(arr, low, m, highest);
}
}
// Merge Function
void merge(int arr[], int low, int m, int highest)
{  int b[50];
 int i= low;
 int j=m+1;
 int k=low;
 while(i<=m && j<=highest)
 {
     if(arr[i]<=arr[j])
        b[k++]=arr[i++];
     else
        b[k++]=arr[j++];
 }
    if(i>m)
    {
        while(j<=highest)
            b[k++]=arr[j++];
    }
    else
    {
        while(i<=m)
            b[k++]=arr[i++];
    }
    for(i=low; i<=highest; i++)
        arr[i]=b[i];
    /*
int i, j, k;
int n1 = m - low + 1;
int n2 = highest - m;
int L[n1], R[n2];

for (i = 0; i < n1; i++)
L[i] = arr[low + i];

for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];
i = 0;
j = 0;
k = low;

while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}

while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}*/


}

void printArray(int arr[],int size)
{
   for (int i=0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

