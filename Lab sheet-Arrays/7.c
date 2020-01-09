#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements :");
    scanf("%d",&size);

    int array[size],frequency[size],count,i,j;
    for(int i=0;i<size;i++)
    {
        printf("Enter the value of element-%d:",i+1);
        scanf("%d",&array[i]);
        frequency[i]=-1;
    }


    for(int i=0;i<size;i++)
    {
        count=1;
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if(frequency[i] != 0)
    	{
    		frequency[i] = count;
		}
	}

 	printf("\n Frequency of All the Elements in this Array are : \n");
 	for (i = 0; i < size; i++)
  	{
  		if(frequency[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", array[i], frequency[i]);
		}
  	}
 	return 0;
    }
