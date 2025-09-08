#include<stdio.h>
int main()
{
	int arr[5],i,del;
	printf("Enter the elements of an array\n ");
	for(i=0;i<5;i++)
	{
		printf("Enter element at %d position : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the position of element for delete : ");
	scanf("%d",&del);
	
	for(i=0;i<5;i++)
	{
		if((i+1)==del)
		{
			arr[i] = arr[i] - arr[i];
		}
		else{
			arr[i] = arr[i];
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
