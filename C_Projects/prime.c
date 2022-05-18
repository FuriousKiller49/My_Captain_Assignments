#include<stdio.h>
#include<conio.h>


void main ()
{
    int flag=0,n,i;
    printf("\nEnter a number:");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==0)
    printf("The number is neither composite nor prime");
    else
    {
        if(flag==1)
        printf("The number is a composite number");
        else
        printf("The number is a prime number");
    }

    getch();
}