// EX02_4.cpp : 
//

#include "stdio.h"
#include <ctype.h>

int main(void)
{
	/* char num1, num2, num3, num4;

	printf("Enter two hex numbers: ");
	scanf("%c%c %c%c", &num1, &num2, &num3, &num4);

	printf("Linked number is: %c%c%c%c\n",
			num3, num4, num1, num2);

	return 0; */

	int hex[4], ch, i = 0;
	
	printf("Enter two hex number: ");
	ch = getchar();
	/* while (ch != '\n') {
		if (isspace(ch)) {
			ch = getchar();
			continue;
		}
		hex[i++] = ch;
		ch = getchar();
	} */
	
	while (ch != '\n') {
		if (!isspace(ch))
			hex[i++] = ch;
		 //add continue here instead of else{} 
		ch = getchar();
	}

	printf("Linked number is: ");
	for (i = 0; i < 4; i++)
		putchar(hex[i]);
	printf("H\n");

	return 0;
}
