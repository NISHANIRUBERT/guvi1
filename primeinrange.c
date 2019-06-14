#include <stdio.h>

int main(void) {
	// your code goes here
	int count,r,l,num,fact,divi;
	scanf("%d %d",&r,&l);
	count=0;
	if(r==2)
	count++;
	r=(r%2==0)?r+1:r;
	for(num=r;num<=l;num=num+2)
	{
		divi=0;
		for(fact=3;fact<=sqrt(num);fact++)
		{
			if(num%fact==0)
			{
			   divi++;
			}
		}
		if(divi==0)
		count++;
	}
	printf("%d",count);
	return 0;
}
