#include <stdio.h>
int main()
{
	int n,i,j,l;
	printf("Enter the line of pattern:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(l=1;l<=n-i;l++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
