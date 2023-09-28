#include<stdio.h>
int main()
{
	int sum=0,n,digit,i;
	printf("enter number=");
	scanf("%d",&n);
	for(;n>0;)
	{
	digit=n%10;
	sum+=digit;
	n/=10;
	}
	printf("%d",sum);
	return(0);
}
