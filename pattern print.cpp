#include <stdio.h>
int main()
{
    int i, j, n ;
    printf("Enter the line you want:");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(j = 1; j <=2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
