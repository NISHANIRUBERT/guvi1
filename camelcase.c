#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char str[1000000];
	int index;
	fgets(str,1000000,stdin);
	str[0]=toupper(str[0]);
	for(index=0;str[index];index++)
	{
	   if(str[index]==' ')
	   {
	   	str[index+1]=toupper(str[index+1]);
	   }
	}
	printf("%s",str);
	return 0;
}
