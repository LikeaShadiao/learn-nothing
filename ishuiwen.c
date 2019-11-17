#include<stdio.h>
int main()
{
	int a,b=0,c,d=0;
	scanf("%d",&a);
	c=a;
	while(a)
	{
		b=b*10+a%10;
		d+=a%10;
		a/=10;
	}
	if(b==c)
	printf("%d",d);
	else
	printf("no");
	
}
//edit to try
