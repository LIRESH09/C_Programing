#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pockmon{
    int HP;
    int speed;
    int attack;
    char tier;
    char name[20];
}pockmon;

pockmon arr[3];
arr[0].HP = 80;
arr[0].speed = 120;
    arr[0].attack = 160;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"charizard");

    arr[1].HP = 160;
    arr[1].speed = 220;
    arr[1].attack = 460;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"Mewtow");
    
    arr[2].HP = 60;
    arr[2].speed = 90;
    arr[2].attack = 60;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"pickachu");

        for(int i=0;i<3;i++){
            printf("%s\n",arr[i].name);
            printf("HP:%d\n",arr[i].HP);
            printf("speed:%d\n",arr[i].speed);
            printf("attack:%d\n",arr[i].attack);
            printf("tier:%c\n",arr[i].tier);

        }
   
return 0;
}
