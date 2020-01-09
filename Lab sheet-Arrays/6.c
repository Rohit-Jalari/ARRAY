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

    int i,j,k;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
             for(k=j;k<size;k++)        /*to eliminate the duplicate*/
             {
                 array[k]=array[k+1];
             }
             size--;       /*size of the array decreases */
             j--;          /*to further check the duplicate from current position j=i+1 */
            }
        }

    }

    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
}







