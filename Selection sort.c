#include<stdio.h>
int main(){

int n, a[50], i, j, m, temp;

printf("\n Enter your array size: ");
scanf("%d", &n);

for(int x=0; x<n; x++)
{
    scanf("%d", &a[x]);
}


for(i=0; i<n-1; i++)
{
    m=i;

    for(j=i+1; j<n; j++)
    {
        if (a[j]<a[m])
        {
            m=j;
        }
    }
    if(m!=i)
    {
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }

}
printf("\n Sorted list order:\n");
for(i=0; i<n; i++)
{
    printf(" %d \n", a[i]);
}
return 0;
}
