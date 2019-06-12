#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch))
	printf("Alphabet");
	else
	printf("No");
	return 0;
}
