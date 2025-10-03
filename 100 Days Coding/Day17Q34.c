// Q34: Write a program to check if a number is prime. //

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int num, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) prime = 0;  
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}
