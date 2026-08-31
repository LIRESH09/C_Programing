#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
}pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 70;
    pikachu.attack = 90;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");

    pokemon* x = &pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);

    printf("%p",x);
    
    return 0;
}