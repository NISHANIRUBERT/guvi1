#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int size,*arr,index,index2,occurance=0,*arr2,index3=1;
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	arr2=(int*)malloc(size*sizeof(int));
	for(index=1;index<=size;index++)
	{
		scanf("%d ",&arr[index]);
	}
	for(index=1;index<=size;index++)
	{
		occurance=0;
		for(index2=index+1;index2<=size;index2++)
		{
			if(arr[index]!=-1)
			{
			if(arr[index]==arr[index2]&&arr[index2]!=-1)
			{
				if(occurance==0)
				{
					arr2[index3++]=arr[index];
					arr[index2]=-1;
				occurance++;
				}
				arr[index2]=-1;
			}
			}
			
		}
		
	}
	if(index3==0)
	printf("unique");
	else
	{
		for(index=1;index<=size;index++)
	{
		for(index2=index+1;index2<=size;index2++)
		{
			if(arr2[index]<arr2[index2])
			{
				int temp=arr2[index];
				arr2[index]=arr2[index2];
				arr2[index2]=temp;
			}
			
		}
		
	}
	}
	for(index=index3-1;index>0;index--)
	printf("%d ",arr2[index]);
	return 0;
}

