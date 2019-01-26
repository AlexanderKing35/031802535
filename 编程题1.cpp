#include<stdio.h>
#include<string.h>
int main()
{
	char str[1100];
	int num[20]={0},a[20],n,c,i,j;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		num[str[i]-'0']++;
	}
	for(i=0;i<=9;i++) a[i]=i;
	for(i=0;i<=9;i++)
		for(j=i+1;j<=9;j++)
		{
			if((num[i]<num[j])||(num[i]==num[j]&&a[i]<a[j]))
			{
				c=num[i]; num[i]=num[j]; num[j]=c;
				c=a[i];   a[i]=a[j];     a[j]=c;
			}
		}
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=num[i];j++)
		printf("%d",a[i]);
	}
	return 0;
}
