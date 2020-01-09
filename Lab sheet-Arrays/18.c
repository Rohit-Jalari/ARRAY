
#include <stdio.h>

int main()
   {
  int arr1[10][10],i,j,n;
  float determinant=0;
 printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element is %d\t : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	    {
	        printf("%d\t",arr1[i][j]);
	    }
	    printf("\n");
	 }
printf("The lower triangular matrix of above matrix is :\n");
   for(i=0;i<n;i++){
   	printf("\n\t");

      for(j=0;j<n;j++)
           if(i<=j)
             printf("%d\t",arr1[i][j]);
           else
             printf("%d\t",0);
  }
       printf("\t");
       system("pause");
}


