#include <stdio.h>

struct pokemon {
    char name[];
    int hp;
};

void printPokemon(struct pokemon x){
    printf("This Pokemon is %s, with a max HP of %d", x.name, x.hp);
}