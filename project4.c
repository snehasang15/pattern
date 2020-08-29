#include<stdio.h>
void main()
{
    int i,k,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=n;k<=n+i;k++)
        {
              printf("0 1 ");
        }
        printf("\n");
    }
}
