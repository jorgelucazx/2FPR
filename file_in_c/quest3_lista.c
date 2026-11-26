/*
    Desenvolver uma função que, dado um arquivo
    texto, verifique o número de letras existentes
    no mesmo (entendendo que no arquivo podem
    existir letras, algarismos e símbolos).
*/

#include <stdio.h>

int numChar();

int main(){

    int mostrar = numChar();
    printf("Contem %d letras.\n",mostrar);
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
            if((c >='a' && c<='z') || (c>='A' && c<='Z')){
                count++;
            }
        }
        
    }
    fclose(arch);
    
    return count;
}