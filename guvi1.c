#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int size,*arr,index,index2;
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	for(index=1;index<=size;index++)
	{
		scanf("%d ",&arr[index]);
	}
	for(index=1;index<=size;index++)
	{
		for(index2=index+1;index2<=size;index2++)
		{
			if(arr[index]==arr[index2])
			{
				printf("%d",arr[index]);
				return 0;
			}
		}
	}
	printf("unique");
	return 0;
}
