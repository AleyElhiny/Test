#include <stdio.h>

int main(void)
{
	int num1,num2;
	char c,d;
	int result=0;
	printf("Enter Number_1\n");
	scanf("%d",&num1);
	printf("Enter the operator\n");
	scanf("%c%c",&c,&d);
	printf("Enter Number_2\n");
	scanf("%d",&num2);
	if (d=='+')
		result=num1+num2;
	else if (d=='-')
		result=num1-num2;
	else if (d=='*')
		result=num1*num2;
	else if (d=='/')
		result=num1/num2;
	
	printf("The result = %d",result);
	
	return 0;
	
}