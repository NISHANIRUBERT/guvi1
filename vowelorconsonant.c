#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(strchr("aeiouAEIOU",ch)!=0)
	printf("Vowel");
	else
	printf("Consonant");
	return 0;
}
