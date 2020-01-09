#include<stdio.h>
int main()
{
   int arr1[3][3],i,j;

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("Enter the value of element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }

  for(i=0;i<3;i++)
  {

      for(j=0;j<3;j++)
           {
            printf("%d\t",arr1[i][j]);
           }
      printf("\n");
  }
}

