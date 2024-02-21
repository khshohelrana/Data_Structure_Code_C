
#include <stdio.h>


int main()
{
    int num;

    printf("\n Enter the number of disks : ");
    scanf("%d", &num);
    printf("\n The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'B', 'C');
    return 0;
}
void towers(int num, char beg, char aux, char end)
{   if(num<=0)
       printf("Illegal Entry");

    else if(num == 1)
    printf("\n Move disk from  %c to %c", beg, end);

    else
        {
    towers(num - 1, beg, end, aux);
    towers( 1, beg, aux, end);
    towers(num - 1,  aux, beg, end );
    }
}
