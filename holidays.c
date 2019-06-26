#include<stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char str[10];
	scanf("%s",str);
	if(strcmp("Sunday",str)==0||strcmp("Saturday",str)==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
