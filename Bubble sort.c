#include<stdio.h>
int main(){

int n, a[50], i, j, temp;

printf("\n Enter your array size: ");
scanf("%d", &n);

for(int x=0; x<n; x++)
{
    scanf("%d", &a[x]);
}

for(i=0; i<n-1; i++)
{
    for(j=0; j<n-i-1; j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
}
printf("\n Sorted list order:\n");
for(i=0; i<n; i++)
{
    printf(" %d \n", a[i]);
}
return 0;
}





