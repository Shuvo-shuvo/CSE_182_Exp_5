#include<stdio.h>

 main()
{
   int x,i;
   printf("Enter a number\n");
   scanf("%d",&x);

   for(i=2;x>1;i++){
    while(x%i==0)
    {
        printf("%d\n",i);
        x=x/i;
    }
   }







}
























