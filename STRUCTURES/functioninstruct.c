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
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp = 80;
    p.attack = 70;
    p.speed = 90;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 80;
    pikachu.speed = 100;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
                                    //structures are pass by value...
    return 0;
}