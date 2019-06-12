#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int num1,num2,num3,x;
	scanf("%d %d %d",&num1,&num2,&num3);
	x=(num1>num2&&num1>num3)?num1:(num2>num3)?num2:num3;
	printf("%d",x);
	return 0;
}
