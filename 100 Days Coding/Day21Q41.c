// Q41: Write a program to swap the first and last digit of a number. //

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, pow10, mid;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                          
    digits = log10(num);                      
    pow10 = pow(10, digits);                  
    first = num / pow10;                     
    mid = num % pow10 / 10;

    int swapped = last * pow10 + mid * 10 + first;
    printf("After swapping: %d\n", swapped);

    return 0;
}
