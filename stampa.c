#include <stdio.h>
#include <stdlib.h>

struct s{
    int a;
    char b;
};

void main(){
    FILE *f;
    struct s nuovo;

    nuovo.a = 1;
    nuovo.b='b';

    f = fopen("dc.txt","w");

   // fprintf(f,"%s %s %d\n", , nome, voto);
   fwrite(&nuovo,sizeof(struct s),1,f);
}