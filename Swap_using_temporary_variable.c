#include<stdio.h>
int main()
{
	int a=4,b=6 ,temp;
	printf("Before Swapping a = %d and b = %d",a,b);
	
	temp = a;
	a=b;
	b=temp;
	
	printf("\nAfter Swapping a = %d and b = %d",a,b);
}
