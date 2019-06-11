#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[100000],str1[100000];
	int index,index2,index3=0,last=0,len=0;
	fgets(str,100000,stdin);
	for(len=0;str[len]!='\0';len++);
	//printf("%d",len);
	for(index=0;index<=len;index++)
	{
		if(str[index]==' '||str[index]=='\0')
		{
			for(index2=index-1;index2>=last;index2--)
			{
				printf("%c",str[index2]);
			}
			last=index+1;
			if(str[index]!=len)
				printf("%c",str[index]);
		}
	
	}
	return 0;
}
