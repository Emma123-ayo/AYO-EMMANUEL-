#include <stdio.h>

int main() {
    int number;

    //get user input
    printf("Enter a number:");
    scanf("%d" , &number);

    //check for negative number
    if (number <0) {
        printf("Negative numbers are not allowed.\n");
        goto end; // jump to the end label
    }

    //process positive number
    printf("You entered a positive number: %d\n", number);

    end:
    printf("program ends here.\n");
    
return 0;
}