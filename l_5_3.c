#include<stdio.h>
int main()
{
    int num,count=2,flag=1;
    printf("Enter a Numbers\n");
    scanf("%d",&num);

    while(count< num)
    {
        if(num % count ==0)
        {
            flag = 0;
            break;
        }
        count++;
    }
    if(flag) printf("%d is prime number\n",num);
    else printf("%d is not prime numebr");

    return 0;
}
























