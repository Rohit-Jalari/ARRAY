#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements :");
    scanf("%d",&size);

    int array[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the value of element-%d:",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 1; i < size; i++)
        {
        if (array[0] < array[i])
           { array[0] = array[i];}
        }
    printf("Maximum element = %d", array[0]);

    return 0;
}

