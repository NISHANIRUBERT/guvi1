#include<stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char str1[100000],str2[100000],index,count;
	scanf("%s %s",str1,str2);
	count=0;
	if(strlen(str1)==strlen(str2))
	{
		for(index=0;str1[index];index++)
		{
			if(str1[index]!=str2[index])
			{
				count++;
				if(count>2)
				{
					printf("no");
					return 0;
				}
			}
		}
		if(count==0)
		printf("no");
		else
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
