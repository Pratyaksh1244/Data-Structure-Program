// write a c program to swap two number using call by value
#include<stdio.h>
int swap(int,int);
void main(){
	int a,b;
	printf("Enter first value : ");
	scanf("%d",&a);
	printf("Enter second value :");
	scanf("%d",&b);
	printf("Before Swapping a = %d and b = %d",a,b);
	swap(a,b);
}
int swap(int c,int d){
	int temp;
	temp=c;
	c=d;
	d=temp;
	printf("\nAfter Swapping a = %d and b = %d",c,d);
}
