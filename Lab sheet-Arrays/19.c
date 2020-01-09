
#include <stdio.h>

int main()
   {
  int arr1[10][10],i,j,n;
  int det=0;


	 printf("Enter the elements of the matrix :\n\t");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element is %d\t : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n\t");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("%d\t",arr1[i][j]);
	    printf("\n\t");
	 }

  for(i=0;i<3;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));

  printf("\nThe Determinant of the matrix is: %d\n\t",det);

}

