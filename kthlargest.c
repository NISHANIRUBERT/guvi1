#include <stdio.h>

int main(void) {
	// your code goes here
	int size,*arr,k,index,index2;
	scanf("%d %d",&size,&k);
	arr=(int*)malloc(size*sizeof(int));
	for(index=0;index<size;index++)
	scanf("%d ",&arr[index]);
	for(index=0;index<size;index++)
	{
		for(index2=index+1;index2<size;index2++)
		{
			if(arr[index]<arr[index2])
			{
				int temp=arr[index];
				arr[index]=arr[index2];
				arr[index2]=temp;
			}
		}
	}
	printf("%d",arr[k-1]);
	
	return 0;
}
