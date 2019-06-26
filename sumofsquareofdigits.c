#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	// your code goes here
long long int num,power,sum;
int digit;
scanf("%lld",&num);
power=1,sum=0;
while(num/power)
{
	digit=(num/power)%10;
	sum+=digit*digit;
	power*=10;
}
printf("%lld",sum);
	return 0;
}
