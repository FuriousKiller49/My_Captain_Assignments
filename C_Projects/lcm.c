#include<stdio.h>
#include<conio.h>

int lcm(int a,int b)

{
    static int m = 0;
    m=m+b;

    if(m%a==0 && m%b==0)
        return m;
    return lcm(a , b);

}

void main()

{

    int x , y;
    printf("Enter First Number : ");
    scanf("%d" , &x);
    printf("Enter Second Number : ");
    scanf("%d" , &y);
    printf("LCM of %d and %d = %d" , x , y , lcm(x , y));

    getch();

}