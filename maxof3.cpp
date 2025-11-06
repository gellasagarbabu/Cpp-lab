#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	printf("enter c value:");
	scanf("%d",&c);
	max=((a>c)?a:c?(a>b)?a:b);
	printf("the biggest number is %d",max);
	return 0;
}
