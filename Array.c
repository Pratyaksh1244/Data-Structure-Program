#include<stdio.h>
int main()
{
	int ar[5]={10,20,30,40,50},i;
	ar[4]=30;
	ar[1]=40;
	for(i=0;i<5;i++){
		printf("%d ",ar[i]);
	}
}
