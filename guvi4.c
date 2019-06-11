#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int size,*arr,index,index2,number=0;
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	for(index=1;index<=size;index++)
	{
		scanf("%d ",&arr[index]);
	}
	for(index=1;index<=size;index++)
	{
		for(index2=index+1;index2<=size;index2++)
		{
			if(arr[index]<arr[index2])
			{
				int temp=arr[index];
				arr[index]=arr[index2];
				arr[index2]=temp;
			}
		}
	}
	for(index=1;index<=size;index++)
	{
		number=number*10+arr[index];
	}
	printf("%d",number);
	return 0;
}

