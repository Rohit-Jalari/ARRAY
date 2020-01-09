#include <stdio.h>

int main()
{
    int arr1[] = { 6, 8, 4, -5, 7, 9 };
    int s = 15;
    printf("The given array : ");
     for (int i = 0; i <6; i++)
    {
    printf("%d\t",arr1[i]);
    }
    printf("\nThe required sum : %d\n",s);


    int a=0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr1[i] + arr1[j] == s)
            {
                printf("Pair of elements that can give sum of 15 are %d and %d\n", arr1[i], arr1[j]);
                a=a++;
            }
            else
            {
                continue;
            }
            printf("%d",a);
        }
    }
    system("pause");
}
