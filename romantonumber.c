#include<stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char str[10];
	int index,num=0,prev=0;
	scanf("%s",str);
	for(index=0;str[index];index++)
	{
		if(str[index]=='I')
		{
			prev=1;
			num+=1;
		}
		else if(str[index]=='V')
		{
			prev=5;
			num+=5;
		}
		else if(str[index]=='X')
		{
			if(prev==1)
			{
				num=num+10-2;
			}
			else
			{
				prev=10;
				num=num+10;
			}
		}
	}
	printf("%d",num);
	return 0;
}
