//Take positive integer input and tell if it is divisible by 3 and 5  

#include<stdio.h>
int main() {

int I;
printf("Enter a Number   : ");
scanf("%d",&I);

if(I%15==0){
printf("Divisible by 15:");
}
else{

  printf("Not Divisible by 15 :");
}
    return 0;
}