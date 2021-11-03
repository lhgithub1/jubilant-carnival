#include<stdio.h>
int main()
{
	int n,a[12],i=0,j=0,b=0,sum=0,c;
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n/=10;
	}
	for(j=0;j<i/2;j++)
	{
		if(a[j]==a[i-1-j])
			b++;
	}
	if(b==i/2)
	{	
		for(c=0;c<i;c++)
		{	
			sum+=a[c];
		}
		printf("%d",sum);
	}
	else
	{	
		printf("no");
	}
	return 0;
}
