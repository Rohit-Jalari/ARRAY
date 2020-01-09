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

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    printf("The sum of the elements is %d",sum);
}
