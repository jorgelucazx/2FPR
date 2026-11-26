/*
Questão 01:
Desenvolver uma função que, dado um arquivo
texto, verifique o número de caracteres no
mesmo.
*/

#include <stdio.h>

int numChar();

int main(){

    int mostrar = numChar();
    printf("Contem %d caracters.\n",mostrar);
    return 0;
}

int numChar(){

    int count = 0;
    char c;

    FILE *arch;

    arch = fopen("arquivo.txt","r");

    if(arch){
        while (fscanf(arch,"%c",&c) != EOF)
        {
            count++;
        }
        
    }
    fclose(arch);
    
    return count;
}