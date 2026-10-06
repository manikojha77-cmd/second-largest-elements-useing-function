#include<stdio.h>
int second_largest(int n,int a[]);
int main()
{ 	int n,i,sl;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sl=second_largest(n,a);
	printf("%d is second largest elements.",sl);
	return 0;
}
int second_largest(int n,int a[])
{
	int i,sl,l=a[0];
	for(i=1;i<n;i++)
	{
		if(l<a[i])
		{
			sl=l;
			l=a[i];
		}
		else if(sl<a[i]&&a[i]!=sl)
		{
			sl=a[i];
		}
	}
	return sl;	
}
