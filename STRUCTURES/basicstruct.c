#include<stdio.h>
int main(){
    struct place{
        int income;
        int vists;
        int population;
    };
    struct place hyderabad;
    hyderabad.income = 1000;
    hyderabad.vists = 200;
    hyderabad.population  = 600;


    printf("%d",hyderabad.income);

    return 0;
}