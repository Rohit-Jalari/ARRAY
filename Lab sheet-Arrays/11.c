#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++)
    {
        printf("Enter the value of element-%d:",i+1);
        scanf("%d", &array[i]);
    }

    int i,largest,second_largest;
    for (i=0;i<size;i++)
    {
        if (array[i]>array[i+1])
        {
            largest=array[i];
            second_largest=array[i+1];
        }
            else if(array[i]<array[i+1])
            {
                largest=array[i+1];
                second_largest=array[i];
            }
            else {continue;}
    }
    printf("The second largest element in the array is %d",second_largest);
}
