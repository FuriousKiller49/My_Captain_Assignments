#include<stdio.h>
#include<conio.h>

void main ()

{
    int n,i,j;

    printf("Enter the range");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("01");
        printf("\n");
    }

    getch();
}