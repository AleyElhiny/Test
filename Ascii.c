#include<stdio.h>

int main(void)
{
	char c;
	printf("Please Enter 1 Character: ");
	scanf("%c",&c);
	
	if ((c>40)&&(c<91))
		printf("Alphabet UpperCase");
	else if ((c>96)&&(c<123))
		printf("Alphabet LowerCase");
	else
		printf("Other");
}
