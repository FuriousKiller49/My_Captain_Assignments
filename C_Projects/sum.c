#include <stdio.h>
#include<conio.h>

int sum(int n)  
{
   if(n!=0)
       return (n%10 + sum(n/10));
   else
       return 0;
}

void main()

{
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   printf("Sum of the digits of %d is: %d",n,sum(n));

   getch();
}

