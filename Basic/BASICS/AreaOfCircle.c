#include <stdio.h>
int main () { 
    // write a program to print the Area of Circle
    float r;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    float A = 3.1415 * r * r ;
    printf("The Area of Circle :%f",A);

    return 0; 
}