#include <stdio.h>


int main() {
    int n, num1, num2, result;
    char option;
    printf("\nWhat operation do you want to do ?\n");
    printf("Press 1 for addition\n");       //+
    printf("Press 2 for subtraction\n");        //-
    printf("Press 3 for multiplication\n");     //*
    printf("Press 4 for division\n");       // DIV
    scanf("%d", &n);
    printf("Please enter a number\n");      //num1
    scanf("%d", &num1);
    printf("Please enter a second number\n");       //num2
    scanf("%d", &num2);
    switch (n) {
        case 1:
            result = num1 + num2;
            printf("addition of two numbers is %d", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction of two numbers is %d", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication of two numbers is %d", result);
            break;
        case 4:
            result = num1 / num2;
            printf("Division of two numbers is %d", result);
            break;
        default:
            printf("Wrong input");

    }
    printf("\n Do you want to continue ? Y/N\n");           //Wanna continue to another operation?

    return 0;


}