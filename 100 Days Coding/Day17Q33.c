// Q33: Write a program to check if a number is an Armstrong number. //

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    for (int n = num; n > 0; n /= 10) digits++;

    for (int n = num; n > 0; n /= 10)
        sum += pow(n % 10, digits);

    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
