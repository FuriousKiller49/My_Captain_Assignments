#include<stdio.h>
#include<conio.h>

void main ()

{
    int n1,n2;
    printf("\nEnter the First Number");
    scanf("%d",&n1);
    printf("\nEnter the Second Number");
    scanf("%d",&n2);
    printf("\nNumbers before swapping are %d and %d",n1,n2);

    n1=n2+n1;
    n2=n1-n2;
    n1=n1-n2;

    printf("\nNumber after swapping are %d and %d",n1,n2);

    getch();


}



