#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	int *arr,shift,size,index;
	scanf("%d %d",&size,&shift);
	arr=(int*)malloc(size*sizeof(int));
	for(index=0;index<size;index++)
	scanf("%d ",&arr[index]);
	for(index=size-shift;index<size;index++)
	printf("%d ",arr[index]);
	for(index=0;index<size-shift;index++)
	printf("%d ",arr[index]);
	return 0;
}
