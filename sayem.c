#include<stdio.h>


int main()
{
    int a[50], size, search, i, result;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("enter %d integer element: ",size);
    for(i=0; i<size; i++)
      {
         scanf("%d",&a[i]);
      }

    printf("Enter the search element: ");
    scanf("%d",&search);

    result =linear_search(a, size, search);

    if (result==-1)
        printf("element not found");
    else
       printf(" Element found at Index %d", result);


return 0;
}

int linear_search(int a[], int size, int search)
{
    for(int i=0; i<size; i++)
    {
        if(search==a[i])
         return i;





    }
    return -1;
}
