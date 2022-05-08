#include<conio.h>
#include<stdio.h>

void main ()

{
    int choice;
    do
    {
        printf("\n1. Pizza\tRs239");
        printf("\n2. Burger\tRs129");
        printf("\n3. Pasta\tRs179");
        printf("\n4. French Fries\tRs99");
        printf("\n5. Sandwhich\tRs149");
        printf("\nEnter a Choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            printf("\nOh Wow!! You got a Pizza");
            break;
            
            case 2 :
            printf("\nOh Wow!! You got a Burger");
            break;

            case 3 :
            printf("\nOh Wow!! You got a Pasta");
            break;

            case 4 :
            printf("\nOh Wow!! You got a French Fries");
            break;

            case 5 :
            printf("\nOh Wow!! You got a Sandwhich");
            break;

            default:
            printf("\nInvalid Input!! Please enter 0 to exit ");
        }

    }while (choice!=0);

    getch();
}