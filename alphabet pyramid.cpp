#include <stdio.h>
int main()
{
    int i, j, n ;
    char cha='A';
    printf("Enter the line you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("%c ",cha);
		}
		cha++;
		printf("\n");
	}
    return 0;
}
