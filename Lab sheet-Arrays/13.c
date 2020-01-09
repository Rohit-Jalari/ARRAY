#include<stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], matadd[3][3];
    int x, y, i, j;

    printf("Enter row size:");
    scanf("%d",&x);

    printf("Enter column size:");
    scanf("%d",&y);

    printf("\nEnter elements of first matrix:");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            scanf("%d", &mat1[i][j]);
    }

    printf("Enter elements of second matrix:");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            scanf("%d", &mat2[i][j]);
    }

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            matadd[i][j] = mat1[i][j] + mat2[i][j];
    }

    printf("\nThe matrix after addition:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            printf("%d ",matadd[i][j]);
        printf("\n");
    }

    return 0;
}

