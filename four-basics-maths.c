#include<stdio.h>

int displayMenu()
{
    int choice;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter an option: ");
    scanf("%d", &choice);
    printf("==================\n");
    return choice;
}

int add(int first, int second)
{
    int sum = first + second;
    return sum;
}

int subtract(int first, int second)
{
    int difference = first - second;
    return difference;
}

int multiply(int first, int second)
{
    int product = first * second;
    return product;
}

int divide(int first, int second)
{
    int quotient = first / second;
    return quotient;
}

void displayAnswer(int result)
{
    printf("Answer is: %d", result);
}

int main()
{
    //asking for choice
    int choice;
    choice = displayMenu();

    if (choice > 4 || choice < 1)
    {
        printf("Invalid option");
        return 0;
    }

    //taking inputs
    int first, second;
    printf("First number: ");
    scanf("%d", &first);
    printf("Second number: ");
    scanf("%d", &second);

    //calculation
    int result;
    if (choice == 1)
        result = add(first, second);

    else if (choice == 2)
        result = subtract(first, second);

    else if (choice == 3)
        result = multiply(first, second);

    else if (choice == 4)
        result = divide(first, second);

    else
        printf("Error");


    //displaying the answer
    displayAnswer(result);

    return 0;
}
