#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if((ch>=95&&ch<=90)||(ch>=97&&ch<=122))
	{
	if(strchr("aeiouAEIOU",ch)!=0)
	printf("Vowel");
	else
	printf("Consonant");
	}
	else
	printf("invalid");
	return 0;
}
