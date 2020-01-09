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

    int total=0;

    for (int i=0;i<size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (array[i]==array[j])
                {total++;
                break;}
        }
    }
    printf("The total number of duplicates are %d",total);
}
