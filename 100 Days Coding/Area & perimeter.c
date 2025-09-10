#include <stdio.h>

int main(){
    int length,breadth;
    printf("Enter length of rectangle:");
    scanf("%d",&length);
    printf("Enter breadth of rectangle:");
    scanf("%d",&breadth);
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    printf("Area of rectangle is %d\n",area);
    printf("Perimeter of rectangle is %d\n",perimeter);
    return 0;
}