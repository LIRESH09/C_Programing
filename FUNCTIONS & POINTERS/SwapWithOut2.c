//Swaping Numbers Without a Third Number..
#include<stdio.h>
int main() {
int a,b;
printf("Enter a Number A : ");
scanf("%d",&a);
printf("Enter a Number B : ");
scanf("%d",&b);
a = a + b;
b =  a - b; 
a = a - b;
printf("Enter a Number A is %d:\n",a);
printf("Enter a Number B is %d:",b);
    
    return 0;
}