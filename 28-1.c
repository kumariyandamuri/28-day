// PROGRAM TO PRINT ARMSTROMG NUMBER RANGE//
#include<stdio.h>
main()
{
	int sum=0,r=0,n,n1,n2,i;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		n=i;
		sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==i)
	{
printf("%d\t",sum);
}
}
return 0;
}

