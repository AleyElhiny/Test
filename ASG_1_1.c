#include <stdio.h>

int main(void)
{
	int x,arr[16],i,j;
	printf("Please enter decimal number: ");
	scanf("%d",&x);
	printf("Hexadecimal Output is: %x",x);
	for(i=0;x>0;i++)
	{
		arr[i]=x%2;
		x=x/2;
	}
	printf("\n Binary Output is: ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	printf("\nHexadecimal Output is: %x",x);
	
	return 0;
}