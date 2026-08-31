#include<stdio.h>
int main(){
    typedef struct pockmon{
        char name[20];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[20];

    }legendarypokemon;  

    legendarypokemon mewtow;
    strcpy(mewtow.ability,"pressure");
    mewtow.normal.hp = 150;
    mewtow.normal.attack = 180;
    strcpy(mewtow.normal.name,"Mewtow");
    mewtow.normal.speed = 170;
    mewtow.normal.tier = 'S';

    
    return 0;
}