#include <stdio.h>

struct pokemon {
    char name;
    int hp;
};

void printPokemon(struct pokemon x){
    printf("This Pokemon is %s, with a max HP of %d", x.name, x.hp);
}

struct pokemon allocPokemon(char name, int hp){
    struct pokemon *p = malloc(sizeof(struct pokemon));
    p->name = name;
    p->hp = hp;
    return *p;
}

int main(){
    int i;
    for (i = 0; i < 26; i++){
        printPokemon(allocPokemon(i, i));
    }
    return 0;
}