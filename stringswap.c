#include <stdio.h>

int main(void) {
	// your code goes here
	char *str=NULL,temp;
	int index;
	scanf("%ms",&str);
	for(index=0;str[index]!='\0';index=index+2)
	{
		temp=str[index];
		str[index]=str[index+1];
		str[index+1]=temp;
	}
	printf("%s",str);
	return 0;
}
