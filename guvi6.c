#include <stdio.h>

int main(void) {
	// your code goes here
	int size,num,index;
	scanf("%d",&size);
	for(index=1;index<=size;index++)
	{
		scanf("%d ",&num);
		if(index%2==1)
		{
			if(num%2==1)
			printf("%d ",num);
		}
		if(index%2==0)
		{
			if(num%2==0)
			printf("%d ",num);
		}
	}
	return 0;
}
