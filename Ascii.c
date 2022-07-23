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
	else if ((c>47)&&(c<58))
		printf("Number");
	else if ((c>31)&&(c<128)) //As I checked for all other options so the remaining in this range will be symbols.
		printf("Symbol");
	else
		printf("Other");
}
