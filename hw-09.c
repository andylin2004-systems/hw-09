#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct pokemon {
    char *name;
    int hp;
};

void printPokemon(struct pokemon * x){
    printf("This Pokemon is %s, with a max HP of %d\n", x->name, x->hp);
}

struct pokemon * allocPokemon(char *name, int hp){
    struct pokemon *p = malloc(sizeof(struct pokemon));
    p->name = name;
    p->hp = hp;
    return p;
}

int main(){
    srand(time(NULL));
    struct pokemon *p = allocPokemon("Pikachu", rand());
    printPokemon(p);
    return 0;
}