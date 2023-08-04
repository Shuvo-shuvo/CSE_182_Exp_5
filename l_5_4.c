#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            printf("%d",i);
            sum=sum+i;
        }
    }
    printf("\nSum of the prime numbers %d and %d",n,sum);

    return 0;
}
























