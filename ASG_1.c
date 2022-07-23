#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	int y= x&1;
	if (y)
		printf("The number is odd = 1 \nThe number is even = 0\n");
	else
		printf("The number is even = 1 \nThe number is odd = 0\n");
	return 0;
}