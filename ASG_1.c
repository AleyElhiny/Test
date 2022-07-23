#include <stdio.h>
//hello github
int main(void)
{
	int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	int y= x&1;
	if (y)
		printf("The number is odd = 1 \nThe number is even = 0\n");
}