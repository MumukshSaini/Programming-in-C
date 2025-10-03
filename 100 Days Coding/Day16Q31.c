// Q31: Write a program to take a number as input and print its equivalent binary representation. //

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary: ");
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }

    if (!started) printf("0");
    printf("\n");

    return 0;
}
