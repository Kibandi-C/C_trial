//simple program that checks if a number is even or odd
//written from phone 
#include <stdio.h>

int main()
{
    //ask user for input
    int test_number;
    printf("Enter number to test : \n");
    scanf(" %d", &test_number);
    
    //if function to test the number 
    
    if(test_number % 2 == 0)
    {
        printf("%d is an even number \n", test_number);
    } else
    {
        printf("%d is an odd number \n", test_number);
    }
    
   
    
    
    
    return 0;
}