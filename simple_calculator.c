//Below is a simple C calculator which uses the switch statement


#include <stdio.h>

int main() {
    //inputs to be used
    float num1, num2, result;
    char operation;

    //ask the user for input
    printf("Enter the first number: \n");
    scanf("%f", &num1);

    printf("Enter the second number: \n");
    scanf("%f", &num2);

    //ask user to specify the operation to be done
    printf("What operation would you like to perform?\n (+, -, /, *): ");
    scanf(" %c", &operation); // leave a space before "%c" to consume any leftover new line character


    switch(operation)
    {
        case '+':
        result = num1 + num2;
        printf("The result is %f", result);
        break;

        case '-':
        result = num1 - num2;
        printf("The result is %f", result);
        break;

        case '*':
        result = num1 * num2;
        printf("The result is %f", result);
        break;

        case '/':
        if(num2 == 0)
        {
            printf("Can not divide by 0");
        } else
        {
            result = num1/num2;
            printf("The result is %f", result);
        }
        break;

        default:
        printf("Invalid Inputs");
        break;

    }

    return 0;
}
