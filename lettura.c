#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



void lettura();

int main(int argc, char const *argv[]){
    

    lettura();

    return 0;
}

void lettura(){
FILE *f;
int temp;
long int  i=0 ,totale1=0,totale2=0;


    f = fopen("DATA.txt","r");
    

    if (f != NULL){
        while (!feof(f)){

            //fread(f,sizeof(int),1,&temp);
            fscanf(f,"%d",&temp);

            if(i % 2 == 0){
            //printf("%d\n",temp);
            totale1 = totale1 + temp;
            }else{
                totale2 = totale2 + temp;
            }
             i++;
        }

       // printf("\n%ld\n",i);
        printf("pianta1 :%ld\n",(totale1/(i/2)));
        printf("pianta2 :%ld",(totale2/(i/2)));
        //printf("%ld",);

        fclose(f);

        //ciao
    }
    
}