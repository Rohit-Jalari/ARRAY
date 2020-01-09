#include <stdio.h>

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

    int maximum,minimum;
    maximum = array[0];
    minimum = array[0];

    for(int i=1; i<size; i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }

        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d", minimum);

    return 0;
}
