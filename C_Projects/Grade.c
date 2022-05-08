#include<stdio.h>
#include<conio.h>

void main ()

{
    int marks;

    printf("\nEnter your Marks out of 100: ");
    scanf("%d",&marks);

    if(marks>=85)
    printf("\nCongratulatiion !! Garde A");
    else if(marks>=70 && marks<85)
    printf("\nOk Can do better Garde B");
    else if(marks>=55 && marks<70)
    printf("\nDo Hard Work Garde C");
    else if(marks>=40 && marks<55)
    printf("\nNeeds Improvement Garde D");
    else if(marks>=0 && marks<40)
    printf("\nSorry Better Luck Nect Time Garde F");

    printf("\nThank you for all your Efforts");

    getch();
}