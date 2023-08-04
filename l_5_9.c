#include<stdio.h>

int main()
{
    int n,rev=0,reminder;
    printf("Enter an integer\n");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        n/=10;
    }
    printf("Reversed number=%d",rev);
    return 0;
}



