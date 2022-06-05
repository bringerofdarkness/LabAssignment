#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Input a number : ");
   scanf("%d",&n);
   printf("The first natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("The Sum of natural numbers upto %d terms : %d \n",n, sum);

}
