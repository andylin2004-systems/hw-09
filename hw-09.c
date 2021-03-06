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

char * randomStringGen(char * string, int length){
    int i;
    for (i = 0; i < length - 1; i++){
        string[i] = 'a' + rand() % 26;
    }
    string[length - 1] = '\0';
    return string;
}

int main(){
    srand(time(NULL));
    int length = rand() % 50 + 2;
    char name[length];
    struct pokemon *p = allocPokemon(randomStringGen(name, length), rand());
    printPokemon(p);
    return 0;
}