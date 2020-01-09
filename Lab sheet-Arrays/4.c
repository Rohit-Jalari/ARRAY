#include<stdio.h>
int main()
{

int array1[5], array2[5];
int i, n;
printf("Enter the elements of array.\n");
for(int i=0;i<5;i++){
	scanf("%d",&array1[i]);
}
for(int i=0;i<5;i++){
	array2[i]=array1[i];
}
for(int i=0;i<5;i++){
	printf("%d\t",array2[i]);
}
system("pause");
}
